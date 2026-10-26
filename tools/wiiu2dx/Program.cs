// wiiu2dx -- convert a Wii U NSMBU model (FRES v3) into an NSMBU Deluxe output.bfres (FRES v8).
//
//   wiiu2dx <wiiu.bfres> <template output.bfres> <out.bfres> [--model-name NAME] [--map wiiuMat=templateMat]...
//
// The generic part (byte order, vertex/index buffers, skeleton, animations, FTEX -> textures.bntx)
// is BfresLibrary's ResFile.ChangePlatform. The NSMBUDX part is the material rebind
// (docs/WIIU_MODELS.md, ledger F0231): Deluxe draws a material with a shading model compiled
// from its Wii U shader program and shipped in the same archive's Wii_UBER.Nin_NX_NVN.bfsha, so
// each converted material takes its shader assign, options, render info and parameters from a
// material of a Deluxe archive (the template), and keeps its own textures.
//
// Run through scripts/models/wiiu2dx.py, which handles the archives.

using BfresLibrary;
using BfresLibrary.PlatformConverters;

static class Program
{
    // FRES 0x00080101 with 2^12 alignment: what every Deluxe output.bfres carries (header 0x08,
    // 0x0E). BfresLibrary writes a Switch version as VersionMajor << 16 | VersionMinor << 8 |
    // VersionMinor2 and takes its v8 layout branches on VersionMajor == 8, so major is 8 here.
    const byte VersionA = 8, VersionB = 0, VersionC = 1, VersionD = 1;
    const uint AlignmentLog2 = 0x0C;

    // Skinning inputs every NSMBUDX Wii_UBER shading model declares (bfsha_info.py).
    static readonly HashSet<string> SkinAttribs = new() { "_i0", "_i1", "_w0", "_w1" };

    static int Main(string[] args)
    {
        if (args.Length == 2 && args[0] == "--dump")
        {
            Dump(new ResFile(args[1]));
            return 0;
        }
        var positional = new List<string>();
        var map = new Dictionary<string, string>();
        string modelName = null;
        string dumpBntx = null;
        var compiledSkin = new Dictionary<string, int>();   // shading model -> gsys_weight compiled
        float? patternFrame = null;
        for (int i = 0; i < args.Length; i++)
        {
            if (args[i] == "--map" && i + 1 < args.Length)
            {
                var kv = args[++i].Split('=', 2);
                map[kv[0]] = kv[1];
            }
            else if (args[i] == "--model-name" && i + 1 < args.Length)
                modelName = args[++i];
            else if (args[i] == "--dump-bntx" && i + 1 < args.Length)
                dumpBntx = args[++i];
            else if (args[i] == "--pattern-frame" && i + 1 < args.Length)
                patternFrame = float.Parse(args[++i], System.Globalization.CultureInfo.InvariantCulture);
            else if (args[i] == "--skin" && i + 1 < args.Length)
            {
                var kv = args[++i].Split('=', 2);
                compiledSkin[kv[0]] = int.Parse(kv[1]);
            }
            else
                positional.Add(args[i]);
        }
        if (positional.Count != 3)
        {
            Console.Error.WriteLine("usage: wiiu2dx <wiiu.bfres> <template output.bfres> <out.bfres> [--model-name NAME] [--map wiiuMat=templateMat]...");
            return 2;
        }

        var res = new ResFile(positional[0]);
        if (res.IsPlatformSwitch)
        {
            Console.Error.WriteLine("input is already a Switch bfres");
            return 1;
        }
        var template = new ResFile(positional[1]);
        if (!template.IsPlatformSwitch)
        {
            Console.Error.WriteLine("template must be a Deluxe (Switch) output.bfres");
            return 1;
        }
        var templateMaterials = template.Models.Values.SelectMany(m => m.Materials.Values).ToList();

        // Smooth-skinning matrices, read before the conversion (ledger F0233). FRES < 3.4 keeps each
        // inverse bind matrix on its bone; Switch keeps them as one list on the skeleton, and
        // BfresLibrary writes NumSmoothMatrices = that list's length. Converted as-is, every smooth
        // matrix became rigid and no inverse bind matrix was written, and the game faulted at 0x0
        // drawing the shapes (0x60434AE8) of both remodels.
        var smoothCounts = res.Models.Values.ToDictionary(m => m.Name, m => (int)m.Skeleton.NumSmoothMatrices);

        res.ChangePlatform(true, 1 << (int)AlignmentLog2, VersionA, VersionB, VersionC, VersionD,
                           ConverterHandle.DEFAULT);
        // ChangePlatform sets DataAlignment after switching platform, and the Switch setter stores
        // value >> 7, not log2; the header byte (and the buffer padding) want the log2 itself.
        res.Alignment = AlignmentLog2;
        res.Name = "output";

        var textureNames = new HashSet<string>(res.Textures.Keys);
        var samplerMaps = new Dictionary<string, Dictionary<string, string>>();   // material -> old sampler -> new
        int problems = 0;
        foreach (var model in res.Models.Values.ToList())
        {
            RebuildInverseMatrices(model.Skeleton, smoothCounts[model.Name], model.Name);

            // Attributes the Deluxe shading models can read: what the template's materials assign,
            // plus the skinning inputs every NSMBUDX shading model declares (_i0/_i1/_w0/_w1).
            var shaderAttribs = new HashSet<string>(SkinAttribs);
            foreach (var mat in model.Materials.Values)
                foreach (var k in PickTemplate(mat.Name, map, templateMaterials, quiet: true).ShaderAssign.AttribAssigns.Keys)
                    shaderAttribs.Add(k);
            int vi = 0;
            foreach (var vb in model.VertexBuffers)
                Deinterleave(vb, shaderAttribs, $"{model.Name} vbuf {vi++}");

            foreach (var mat in model.Materials.Values)
            {
                var tpl = PickTemplate(mat.Name, map, templateMaterials);
                problems += Rebind(mat, tpl, textureNames, out var samplerMap);
                samplerMaps[mat.Name] = samplerMap;
            }
            var materials = model.Materials.Values.ToList();
            foreach (var shape in model.Shapes.Values)
            {
                string sm = materials[shape.MaterialIndex].ShaderAssign.ShadingModelName;
                if (compiledSkin.TryGetValue(sm, out int want) && shape.VertexSkinCount != want)
                    FitSkin(model, shape, want, sm);
            }

            if (modelName != null && model.Name != modelName)
            {
                Console.WriteLine($"model '{model.Name}' -> '{modelName}'");
                res.Models.Rename(model.Name, modelName);
                model.Name = modelName;
            }
        }

        // Texture-pattern animations name the *material sampler* they drive. Rebinding re-routed
        // samplers (the Bee's albedo moved from _a2 to _a0), so the animations follow (ledger F0235):
        // left alone, the Bee's animation pasted its colour textures over the lighting map in _a2
        // and the model drew dark.
        foreach (var anim in res.TexPatternAnims.Values)
            foreach (var d in anim.MaterialAnimDataList)
                if (samplerMaps.TryGetValue(d.Name, out var sm) && d.PatternAnimInfos != null)
                    foreach (var p in d.PatternAnimInfos)
                        if (sm.TryGetValue(p.Name, out var to) && to != p.Name)
                        {
                            Console.WriteLine($"  anim {anim.Name}: {d.Name} pattern {p.Name} -> {to}");
                            p.Name = to;
                        }

        if (patternFrame is float frame)
            FreezePatterns(res, frame);

        if (dumpBntx != null && res.ExternalFiles.ContainsKey("textures.bntx"))
            File.WriteAllBytes(dumpBntx, res.ExternalFiles["textures.bntx"].Data);

        res.Save(positional[2]);
        Console.WriteLine($"wrote {positional[2]}: {res.Models.Count} model(s), {res.Textures.Count} texture(s), " +
                          $"{res.SkeletalAnims.Count} skeletal anim(s)");
        return problems == 0 ? 0 : 3;
    }

    // Deluxe stores every vertex attribute in a buffer of its own (Nintendo's kakibo: _p0 stride 12,
    // _i0 stride 1, _n0 stride 4, _u0 stride 4), where Wii U interleaves them (kakibo: one buffer,
    // stride 21, _u0 at the odd offset 17). The game's per-shape draw (0x60434AE8) faulted on the
    // interleaved layout (ledger F0232), so convert to Nintendo's: one tightly packed buffer per
    // attribute, offset 0. Attributes no Deluxe shading model reads (vertex colour, tangents,
    // binormals) are dropped, as Nintendo's converter does.
    static void Deinterleave(VertexBuffer vb, HashSet<string> keep, string label)
    {
        var attribs = new ResDict<VertexAttrib>();
        var buffers = new List<BfresLibrary.Buffer>();
        int count = (int)vb.VertexCount;
        // Nintendo's buffer order: position first, then by name (_p0 _i0 _n0 _u0; _p0 _n0 _u0).
        var order = vb.Attributes.Keys.OrderBy(k => k == "_p0" ? "" : k, StringComparer.Ordinal).ToList();
        foreach (var name in order)
        {
            var a = vb.Attributes[name];
            if (!keep.Contains(name))
            {
                Console.WriteLine($"  {label}: dropping attribute {name} ({a.Format}), no Deluxe shader reads it");
                continue;
            }
            int size = FormatSize(a.Format);
            var src = vb.Buffers[a.BufferIndex];
            var data = new byte[size * count];
            for (int v = 0; v < count; v++)
                Array.Copy(src.Data[0], v * src.Stride + a.Offset, data, v * size, size);
            a.BufferIndex = (byte)buffers.Count;
            a.Offset = 0;
            buffers.Add(new BfresLibrary.Buffer { Stride = (ushort)size, Data = new[] { data } });
            attribs.Add(name, a);
        }
        vb.Attributes = attribs;
        vb.Buffers = buffers;
    }

    // ---- texture patterns (ledger F0236) -----------------------------------------------------
    //
    // An actor's code may not *play* its texture-pattern animation but hold it on a frame: the
    // Cheep Cheep holds "pukupuku" on its colour variant, frame 0 for a normal one. A model whose
    // look depends on another frame (the Bee: frame 0 is a blank 10x10 placeholder, frame 1 the bee
    // atlas and the bug eye) then shows the placeholder. --pattern-frame N resolves every pattern
    // at frame N: the material gets that texture as its own, and the curve is flattened so any
    // frame the game picks shows it.
    static void FreezePatterns(ResFile res, float frame)
    {
        var materials = res.Models.Values.SelectMany(m => m.Materials.Values).ToDictionary(m => m.Name);
        foreach (var anim in res.TexPatternAnims.Values)
        {
            var names = anim.TextureNames.Keys.ToList();
            foreach (var d in anim.MaterialAnimDataList)
            {
                if (d.PatternAnimInfos == null || d.Curves == null || !materials.TryGetValue(d.Name, out var mat))
                    continue;
                for (int p = 0; p < d.PatternAnimInfos.Count && p < d.Curves.Count; p++)
                {
                    var c = d.Curves[p];
                    int key = 0;
                    for (int i = 0; i < c.Frames.Length; i++)
                        if (c.Frames[i] <= frame)
                            key = i;
                    int tex = (int)Math.Round(c.Keys[key, 0] * c.Scale + (float)c.Offset);
                    if (tex < 0 || tex >= names.Count)
                        continue;
                    string sampler = d.PatternAnimInfos[p].Name;
                    int slot = mat.Samplers.Keys.ToList().IndexOf(sampler);
                    if (slot < 0 || slot >= mat.TextureRefs.Count)
                        continue;
                    Console.WriteLine($"  {anim.Name}: {d.Name} {sampler} at frame {frame} -> {names[tex]} (was {mat.TextureRefs[slot].Name})");
                    mat.TextureRefs[slot] = new TextureRef { Name = names[tex] };
                    for (int i = 0; i < c.Frames.Length; i++)
                        c.Keys[i, 0] = (tex - (float)c.Offset) / c.Scale;
                    if (d.BaseDataList != null && p < d.BaseDataList.Length)
                        d.BaseDataList[p] = (ushort)tex;
                }
            }
        }
    }

    // ---- skin count (ledger F0234)----------------------------------------------------------
    //
    // Each Deluxe shading model holds exactly one compiled program, keyed by gsys_weight = the
    // skin count of the shape Nintendo drew with it (kakibo body 1, eye 0), and has no default
    // program. A shape with any other count selects no program and the per-shape draw
    // (0x60434AE8) dereferences null. So every shape is fitted to its shader's count:
    //   more weights than compiled -> keep the strongest, renormalised (for 1: the dominant bone;
    //     skin-1 vertices stay in model space and use the same world*inverse-bind palette entry);
    //   skin 0 -> 1 -> every vertex indexed to the shape's bone through its rigid palette entry.
    static void FitSkin(Model model, Shape shape, int want, string shadingModel)
    {
        var vb = model.VertexBuffers[shape.VertexBufferIndex];
        int have = shape.VertexSkinCount;
        int count = (int)vb.VertexCount;
        if (model.Shapes.Values.Count(s => s.VertexBufferIndex == shape.VertexBufferIndex) > 1)
            throw new InvalidDataException($"{shape.Name}: vertex buffer shared by several shapes; cannot refit its skinning");

        uint[,] idx = new uint[count, Math.Max(want, 1)];
        float[,] wt = new float[count, Math.Max(want, 1)];
        if (have == 0 && want == 1)
        {
            var bone = model.Skeleton.Bones.Values.ElementAt(shape.BoneIndex);
            if (bone.RigidMatrixIndex < 0)
                throw new InvalidDataException($"{shape.Name}: bone {bone.Name} has no rigid matrix to index");
            for (int v = 0; v < count; v++) { idx[v, 0] = (uint)bone.RigidMatrixIndex; wt[v, 0] = 1; }
        }
        else if (have > want && want >= 1)
        {
            var srcIdx = ReadComponents(vb, "_i0", count, Math.Min(have, 4));
            var srcIdx1 = have > 4 ? ReadComponents(vb, "_i1", count, have - 4) : null;
            float[,] srcW = vb.Attributes.ContainsKey("_w0") ? ReadComponentsF(vb, "_w0", count, Math.Min(have, 4)) : null;
            float[,] srcW1 = have > 4 && vb.Attributes.ContainsKey("_w1") ? ReadComponentsF(vb, "_w1", count, have - 4) : null;
            for (int v = 0; v < count; v++)
            {
                var pairs = Enumerable.Range(0, have).Select(k => (
                    i: k < 4 ? srcIdx[v, k] : srcIdx1[v, k - 4],
                    w: srcW == null ? (k == 0 ? 1f : 0f) : (k < 4 ? srcW[v, k] : srcW1[v, k - 4])))
                    .OrderByDescending(p => p.w).Take(want).ToList();
                float sum = pairs.Sum(p => p.w);
                for (int k = 0; k < want; k++)
                {
                    idx[v, k] = pairs[k].i;
                    wt[v, k] = sum > 0 ? pairs[k].w / sum : (k == 0 ? 1 : 0);
                }
            }
        }
        else
            throw new InvalidDataException($"{shape.Name}: skin count {have} cannot be fitted to {want} " +
                                           $"(the only program {shadingModel} has); pick a template material compiled for it");

        foreach (var n in new[] { "_i0", "_i1", "_w0", "_w1" })
            RemoveAttribute(vb, n);
        uint maxIdx = 0;
        foreach (var x in idx) maxIdx = Math.Max(maxIdx, x);
        if (maxIdx > 255)
            throw new InvalidDataException($"{shape.Name}: matrix index {maxIdx} does not fit 8 bits");
        var idxBytes = new byte[count * want];
        for (int v = 0; v < count; v++)
            for (int k = 0; k < want; k++)
                idxBytes[v * want + k] = (byte)idx[v, k];
        AddAttribute(vb, "_i0", IndexFormat(want), idxBytes, want);
        if (want > 1)
        {
            var wBytes = new byte[count * want * 4];
            for (int v = 0; v < count; v++)
                for (int k = 0; k < want; k++)
                    BitConverter.GetBytes(wt[v, k]).CopyTo(wBytes, (v * want + k) * 4);
            AddAttribute(vb, "_w0", WeightFormat(want), wBytes, want * 4);
        }
        shape.VertexSkinCount = (byte)want;
        vb.VertexSkinCount = (byte)want;
        Console.WriteLine($"  shape {shape.Name}: skin count {have} -> {want} (the program {shadingModel} was compiled for)");
    }

    static BfresLibrary.GX2.GX2AttribFormat IndexFormat(int n) => n switch
    {
        1 => BfresLibrary.GX2.GX2AttribFormat.Format_8_UInt,
        2 => BfresLibrary.GX2.GX2AttribFormat.Format_8_8_UInt,
        _ => BfresLibrary.GX2.GX2AttribFormat.Format_8_8_8_8_UInt,
    };

    static BfresLibrary.GX2.GX2AttribFormat WeightFormat(int n) => n switch
    {
        2 => BfresLibrary.GX2.GX2AttribFormat.Format_32_32_Single,
        3 => BfresLibrary.GX2.GX2AttribFormat.Format_32_32_32_Single,
        _ => BfresLibrary.GX2.GX2AttribFormat.Format_32_32_32_32_Single,
    };

    // Integer components of a de-interleaved attribute (its own buffer, offset 0).
    static uint[,] ReadComponents(VertexBuffer vb, string name, int count, int comps)
    {
        var a = vb.Attributes[name];
        var (width, kind) = Components(a.Format);
        var buf = vb.Buffers[a.BufferIndex];
        var o = new uint[count, comps];
        for (int v = 0; v < count; v++)
            for (int k = 0; k < comps && k < width.Length; k++)
            {
                int off = v * buf.Stride + width.Take(k).Sum() / 8;
                o[v, k] = width[k] switch
                {
                    8 => buf.Data[0][off],
                    16 => BitConverter.ToUInt16(buf.Data[0], off),
                    _ => BitConverter.ToUInt32(buf.Data[0], off),
                };
            }
        return o;
    }

    static float[,] ReadComponentsF(VertexBuffer vb, string name, int count, int comps)
    {
        var a = vb.Attributes[name];
        var (width, kind) = Components(a.Format);
        var buf = vb.Buffers[a.BufferIndex];
        var o = new float[count, comps];
        for (int v = 0; v < count; v++)
            for (int k = 0; k < comps && k < width.Length; k++)
            {
                int off = v * buf.Stride + width.Take(k).Sum() / 8;
                o[v, k] = (width[k], kind) switch
                {
                    (32, "Single") => BitConverter.ToSingle(buf.Data[0], off),
                    (16, "Single") => (float)BitConverter.ToHalf(buf.Data[0], off),
                    (8, _) => buf.Data[0][off] / 255f,
                    (16, _) => BitConverter.ToUInt16(buf.Data[0], off) / 65535f,
                    _ => throw new NotSupportedException($"weight format {a.Format}"),
                };
            }
        return o;
    }

    static (int[] width, string kind) Components(BfresLibrary.GX2.GX2AttribFormat f)
    {
        var parts = f.ToString().Split('_').Skip(1).ToList();
        var width = parts.TakeWhile(p => int.TryParse(p, out _)).Select(int.Parse).ToArray();
        return (width, parts.Last());
    }

    static void RemoveAttribute(VertexBuffer vb, string name)
    {
        if (!vb.Attributes.ContainsKey(name))
            return;
        int bi = vb.Attributes[name].BufferIndex;
        vb.Attributes.RemoveKey(name);
        vb.Buffers.RemoveAt(bi);
        foreach (var a in vb.Attributes.Values)
            if (a.BufferIndex > bi)
                a.BufferIndex--;
    }

    // Re-sorts the buffers into Nintendo's order (position first, then by name).
    static void AddAttribute(VertexBuffer vb, string name, BfresLibrary.GX2.GX2AttribFormat format, byte[] data, int stride)
    {
        var all = vb.Attributes.Keys.Select(k => (k, a: vb.Attributes[k], b: vb.Buffers[vb.Attributes[k].BufferIndex])).ToList();
        all.Add((name, new VertexAttrib { Name = name, Format = format }, new BfresLibrary.Buffer { Stride = (ushort)stride, Data = new[] { data } }));
        var attribs = new ResDict<VertexAttrib>();
        var buffers = new List<BfresLibrary.Buffer>();
        foreach (var (k, a, b) in all.OrderBy(x => x.k == "_p0" ? "" : x.k, StringComparer.Ordinal))
        {
            a.BufferIndex = (byte)buffers.Count;
            a.Offset = 0;
            buffers.Add(b);
            attribs.Add(k, a);
        }
        vb.Attributes = attribs;
        vb.Buffers = buffers;
    }

    // Smooth matrix i belongs to bone MatrixToBoneList[i]; its inverse bind matrix is that bone's.
    static void RebuildInverseMatrices(Skeleton skeleton, int smooth, string label)
    {
        if (smooth == 0 || skeleton.InverseModelMatrices.Count == smooth)
            return;
        var bones = skeleton.Bones.Values.ToList();
        var list = new List<Syroot.Maths.Matrix3x4>();
        for (int i = 0; i < smooth; i++)
        {
            var bone = bones[skeleton.MatrixToBoneList[i]];
            if (bone.InverseMatrix == null)
                throw new InvalidDataException($"{label}: bone {bone.Name} is smooth-skinned but has no inverse bind matrix");
            list.Add(bone.InverseMatrix);
        }
        skeleton.InverseModelMatrices = list;
        Console.WriteLine($"  {label}: {smooth} smooth matrices, inverse bind matrices taken from the bones");
    }

    // Bytes per vertex of a GX2/gfx attribute format: the bit widths in its name ("Format_10_10_10_2_SNorm").
    static int FormatSize(BfresLibrary.GX2.GX2AttribFormat format)
    {
        int bits = format.ToString().Split('_').Skip(1).TakeWhile(p => int.TryParse(p, out _)).Sum(int.Parse);
        if (bits % 8 != 0 || bits == 0)
            throw new NotSupportedException($"vertex format {format}");
        return bits / 8;
    }

    static Material PickTemplate(string name, Dictionary<string, string> map, List<Material> templates, bool quiet = false)
    {
        string want = map.TryGetValue(name, out var m) ? m : name;
        var tpl = templates.FirstOrDefault(t => t.Name == want);
        if (tpl == null)
        {
            if (map.ContainsKey(name))
                throw new ArgumentException($"--map {name}={want}: the template has no material '{want}' " +
                                            $"(it has {string.Join(", ", templates.Select(t => t.Name))})");
            tpl = templates[0];
            if (!quiet) Console.WriteLine($"material '{name}': no template material of that name, using '{tpl.Name}' (use --map)");
        }
        return tpl;
    }

    // The material keeps its name, its textures and its own attribute assigns; everything the
    // Deluxe shader reads comes from the template material.
    static int Rebind(Material mat, Material tpl, HashSet<string> textureNames, out Dictionary<string, string> samplerMap)
    {
        int problems = 0;
        samplerMap = new Dictionary<string, string>();

        // Textures, routed by the *shader's* sampler variable (_a0, _a1 ...): the Wii U material's
        // sampler assign says which of its samplers feeds a variable, and its texture list is in
        // sampler order. The template's material samplers and assign are kept as they are.
        var srcAssign = mat.ShaderAssign.SamplerAssigns;
        var srcSamplers = mat.Samplers.Keys.ToList();
        var tplSamplers = tpl.Samplers.Keys.ToList();
        var textures = new List<TextureRef>();
        foreach (var tplSampler in tplSamplers)
        {
            string shaderVar = tpl.ShaderAssign.SamplerAssigns.Keys
                .FirstOrDefault(k => tpl.ShaderAssign.SamplerAssigns[k].String == tplSampler) ?? tplSampler;
            string tex = null;
            if (srcAssign.ContainsKey(shaderVar))
            {
                samplerMap[srcAssign[shaderVar].String] = tplSampler;   // old material sampler -> new
                int idx = srcSamplers.IndexOf(srcAssign[shaderVar].String);
                if (idx >= 0 && idx < mat.TextureRefs.Count)
                    tex = mat.TextureRefs[idx].Name;
            }
            if (tex == null)
            {
                int tplIdx = tplSamplers.IndexOf(tplSampler);
                tex = tplIdx < tpl.TextureRefs.Count ? tpl.TextureRefs[tplIdx].Name : null;
                Console.WriteLine($"  {mat.Name}: shader sampler {shaderVar} unassigned, using template texture '{tex}'");
            }
            if (tex == null || !textureNames.Contains(tex))
            {
                Console.Error.WriteLine($"  {mat.Name}: texture '{tex}' for {shaderVar} is not in the model");
                problems++;
            }
            textures.Add(new TextureRef { Name = tex });
        }

        var attribs = new ResDict<ResString>();
        foreach (var k in tpl.ShaderAssign.AttribAssigns.Keys)
            attribs.Add(k, new ResString { String = tpl.ShaderAssign.AttribAssigns[k].String });
        foreach (var k in mat.ShaderAssign.AttribAssigns.Keys)   // skin inputs a remodel gained (_w0 ...)
            if (!attribs.ContainsKey(k) && SkinAttribs.Contains(k))
                attribs.Add(k, new ResString { String = mat.ShaderAssign.AttribAssigns[k].String });

        var assign = new ShaderAssign
        {
            ShaderArchiveName = tpl.ShaderAssign.ShaderArchiveName,
            ShadingModelName = tpl.ShaderAssign.ShadingModelName,
            Revision = tpl.ShaderAssign.Revision,
            AttribAssigns = attribs,
            SamplerAssigns = Copy(tpl.ShaderAssign.SamplerAssigns),
            ShaderOptions = Copy(tpl.ShaderAssign.ShaderOptions),
        };

        // Parameters: the template's set (its uniform block layout), with the Wii U value wherever
        // the same parameter of the same type exists in the source material.
        var source = mat.ShaderParams;
        var parameters = new ResDict<ShaderParam>();
        int kept = 0;
        foreach (var p in tpl.ShaderParams.Values)
        {
            var copy = new ShaderParam
            {
                Name = p.Name, Type = p.Type, DataOffset = p.DataOffset,
                DependedIndex = p.DependedIndex, DependIndex = p.DependIndex,
                DataValue = p.DataValue,
            };
            if (source.ContainsKey(p.Name) && source[p.Name].Type == p.Type && source[p.Name].DataValue != null)
            {
                copy.DataValue = source[p.Name].DataValue;
                kept++;
            }
            parameters.Add(p.Name, copy);
        }

        Console.WriteLine($"material '{mat.Name}' -> {assign.ShaderArchiveName}/{assign.ShadingModelName}: " +
                          $"textures [{string.Join(", ", textures.Select(t => t.Name))}], " +
                          $"{kept}/{parameters.Count} parameter values from the Wii U material");

        mat.ShaderAssign = assign;
        mat.TextureRefs = textures;
        mat.Samplers = tpl.Samplers;
        mat.RenderInfos = tpl.RenderInfos;
        mat.ShaderParams = parameters;
        mat.ShaderParamData = tpl.ShaderParamData;
        mat.VolatileFlags = tpl.VolatileFlags;
        mat.Flags = tpl.Flags;
        return problems;
    }

    // Everything the per-shape draw (0x60434AE8, ledger F0232) reads, one line per object, so a
    // converted model can be diffed against Nintendo's conversion of the same model.
    static void Dump(ResFile res)
    {
        Console.WriteLine($"FRES switch={res.IsPlatformSwitch} v{res.VersionMajor}.{res.VersionMinor}.{res.VersionMinor2} align={res.Alignment}");
        foreach (var m in res.Models.Values)
        {
            var sk = m.Skeleton;
            Console.WriteLine($"model {m.Name}: smooth={sk.NumSmoothMatrices} rigid={sk.NumRigidMatrices} " +
                              $"mtx2bone=[{string.Join(",", sk.MatrixToBoneList ?? new List<ushort>())}] " +
                              $"invmtx={sk.InverseModelMatrices?.Count ?? 0}");
            foreach (var b in sk.Bones.Values)
                Console.WriteLine($"  bone {b.Name} parent={b.ParentIndex} smooth={b.SmoothMatrixIndex} rigid={b.RigidMatrixIndex} bb={b.BillboardIndex}");
            int vi = 0;
            foreach (var vb in m.VertexBuffers)
            {
                Console.WriteLine($"  vbuf {vi++}: skin={vb.VertexSkinCount} verts={vb.VertexCount} buffers=[{string.Join(", ", vb.Buffers.Select(x => $"stride {x.Stride} len {x.Data[0].Length}"))}]");
                foreach (var a in vb.Attributes.Values)
                {
                    Console.WriteLine($"    attr {a.Name} buf={a.BufferIndex} off={a.Offset} fmt={a.Format}");
                    if (a.Name == "_c0" && a.Format.ToString().StartsWith("Format_32_32_32_32_Single"))
                    {
                        // Distinct colours, so a material's vertex colouring can be judged.
                        var buf = vb.Buffers[a.BufferIndex];
                        var seen = new Dictionary<string, int>();
                        for (int v = 0; v < vb.VertexCount; v++)
                        {
                            var c = new float[4];
                            for (int k = 0; k < 4; k++)
                            {
                                var b = buf.Data[0].Skip(v * buf.Stride + a.Offset + 4 * k).Take(4).ToArray();
                                if (!res.IsPlatformSwitch) Array.Reverse(b);
                                c[k] = BitConverter.ToSingle(b, 0);
                            }
                            string key = string.Join(" ", c.Select(x => x.ToString("0.00")));
                            seen[key] = seen.GetValueOrDefault(key) + 1;
                        }
                        foreach (var kv in seen.OrderByDescending(x => x.Value).Take(8))
                            Console.WriteLine($"      colour {kv.Key}  x{kv.Value}");
                    }
                }
            }
            foreach (var s in m.Shapes.Values)
            {
                Console.WriteLine($"  shape {s.Name}: flags={s.Flags} mat={s.MaterialIndex} bone={s.BoneIndex} vbuf={s.VertexBufferIndex} " +
                                  $"skin={s.VertexSkinCount} skinbones=[{string.Join(",", s.SkinBoneIndices ?? new List<ushort>())}] " +
                                  $"radius={s.RadiusArray?.Count ?? 0}/{s.BoundingRadiusList?.Count ?? 0} bounds={s.SubMeshBoundings?.Count ?? 0} " +
                                  $"nodes={s.SubMeshBoundingNodes?.Count ?? 0} keyshapes={s.KeyShapes?.Count ?? 0}");
                foreach (var me in s.Meshes)
                    Console.WriteLine($"    mesh {me.PrimitiveType} {me.IndexFormat} first={me.FirstVertex} idxbytes={me.IndexBuffer?.Data?[0]?.Length} " +
                                      $"sub=[{string.Join(",", me.SubMeshes.Select(x => $"{x.Offset}+{x.Count}"))}]");
            }
            foreach (var mat in m.Materials.Values)
                Console.WriteLine($"  material {mat.Name}: {mat.ShaderAssign.ShadingModelName} tex=[{string.Join(",", mat.TextureRefs.Select(t => t.Name))}] " +
                                  $"samplers=[{string.Join(",", mat.Samplers.Keys)}] assign=[{string.Join(",", mat.ShaderAssign.SamplerAssigns.Keys.Select(k => k + "->" + mat.ShaderAssign.SamplerAssigns[k].String))}] params={mat.ShaderParams.Count}");
        }
        var anims = res.TexPatternAnims.Values;   // the Switch loader splits its material anims into these too
        foreach (var a in anims)
        {
            Console.WriteLine($"matanim {a.Name}: frames={a.FrameCount} textures=[{string.Join(",", a.TextureNames?.Keys ?? Enumerable.Empty<string>())}]");
            foreach (var d in a.MaterialAnimDataList)
            {
                Console.WriteLine($"    material {d.Name}: patterns=[{string.Join(",", d.PatternAnimInfos?.Select(p => p.Name) ?? Enumerable.Empty<string>())}] " +
                                  $"base=[{string.Join(",", d.BaseDataList ?? new ushort[0])}] constants={d.Constants?.Count ?? 0} curves={d.Curves?.Count ?? 0}");
                foreach (var c in d.Curves ?? new List<AnimCurve>())
                    Console.WriteLine($"      curve frames=[{string.Join(",", c.Frames)}] texture index=[{string.Join(",", Enumerable.Range(0, c.Keys.GetLength(0)).Select(i => c.Keys[i, 0] * c.Scale + c.Offset))}]");
            }
        }
    }

    static ResDict<ResString> Copy(ResDict<ResString> d)
    {
        var o = new ResDict<ResString>();
        foreach (var k in d.Keys)
            o.Add(k, new ResString { String = d[k].String });
        return o;
    }
}
