// suittex: adds suit textures and a frame to the switch animations of a Deluxe player model.
// See README.md. Works on the output.bfres of an archive; scripts/models/hammer_suit_textures.py
// is the command you run.
//
//   suittex roundtrip <in.bfres> <out.bfres>
//   suittex info <in.bfres>
//   suittex apply <in.bfres> <out.bfres> <job.txt>
//
// job.txt, one instruction per line (data files hold one raw swizzled mip each):
//   texture <new name> <clone from> <mip0.bin> <mip1.bin> ...
//   frame <animation> <frame> <material> <sampler> <texture>    add this key to that curve

using BfresLibrary;
using BfresLibrary.Switch;
using Syroot.NintenTools.NSW.Bntx;

static class Program
{
    static ResFile Load(string path) => new ResFile(path);

    // The loader keeps the parsed file here and saves it from here (ResFile.cs).
    static BntxFile Bntx(ResFile res) =>
        (BntxFile)res.ExternalFiles.Values.First(f => f.LoadedFileData is BntxFile).LoadedFileData;

    static int Main(string[] args)
    {
        if (args.Length == 3 && args[0] == "roundtrip") {
            Load(args[1]).Save(args[2]);
            return 0;
        }
        if (args.Length == 2 && args[0] == "info") {
            Info(Load(args[1]));
            return 0;
        }
        if (args.Length == 4 && args[0] == "apply") {
            var res = Load(args[1]);
            Apply(res, args[1], File.ReadAllLines(args[3]));
            res.Save(args[2]);
            return 0;
        }
        if (args.Length == 3 && args[0] == "verts") {
            Verts(Load(args[1]), args[2]);
            return 0;
        }
        if (args.Length == 3 && args[0] == "matinfo") {
            MatInfo(Load(args[1]), args[2]);
            return 0;
        }
        if (args.Length == 3 && args[0] == "sklinfo") {
            SklInfo(Load(args[1]), args[2]);
            return 0;
        }
        Console.Error.WriteLine("usage: suittex roundtrip|info|apply|sklinfo ...");
        return 1;
    }

    // Which bone moves each vertex of a rigidly skinned model, for previews.
    static void Verts(ResFile res, string name)
    {
        var model = res.Models[name];
        var palette = model.Skeleton.MatrixToBoneList.ToList();
        foreach (var shape in model.Shapes.Values) {
            var h = new BfresLibrary.Helpers.VertexBufferHelper(model.VertexBuffers[shape.VertexBufferIndex], res.ByteOrder);
            Console.WriteLine(shape.Name + " " + string.Join(",", h["_i0"].Data.Select(v => palette[(int)v.X])));
        }
    }

    static void MatInfo(ResFile res, string name)
    {
        var mat = res.Models[name].Materials.Values.First();
        Console.WriteLine($"flags={mat.Flags} visible={mat.Visible}");
        foreach (var r in mat.RenderInfos.Values)
            Console.WriteLine($"info {r.Name} {r.Type} {(r.Type == RenderInfoType.String ? string.Join(",", r.GetValueStrings()) : r.Type == RenderInfoType.Single ? string.Join(",", r.GetValueSingles()) : string.Join(",", r.GetValueInt32s()))}");
        foreach (var o in mat.ShaderAssign.ShaderOptions)
            Console.WriteLine($"opt {o.Key}={o.Value}");
        foreach (var o in mat.ShaderAssign.AttribAssigns)
            Console.WriteLine($"attr {o.Key}={o.Value}");
        foreach (var p in mat.ShaderParams.Values) {
            int size = (int)p.DataSize;
            var data = mat.ShaderParamData;
            Console.WriteLine($"param {p.Name} {p.Type} " + string.Join(",", Enumerable.Range(0, size / 4).Select(i => BitConverter.ToSingle(data, (int)p.DataOffset + i * 4).ToString("0.###"))));
        }
        foreach (var t in mat.TextureRefs)
            Console.WriteLine($"texref {t.Name}");
    }

    static void SklInfo(ResFile res, string name)
    {
        foreach (var m in res.Models.Values)
            foreach (var b in m.Skeleton.Bones.Values)
                Console.WriteLine($"bone {b.Name} parent={b.ParentIndex} rotmode={b.FlagsRotation} t=({b.Position.X:0.###},{b.Position.Y:0.###},{b.Position.Z:0.###}) r=({b.Rotation.X:0.###},{b.Rotation.Y:0.###},{b.Rotation.Z:0.###},{b.Rotation.W:0.###}) s=({b.Scale.X:0.###},{b.Scale.Y:0.###},{b.Scale.Z:0.###})");
        var a = res.SkeletalAnims[name];
        Console.WriteLine($"anim {a.Name} frames={a.FrameCount} flags={a.FlagsAnimSettings} scale={a.FlagsScale} rot={a.FlagsRotate} baked={a.BakedSize} bind={(a.BindIndices == null ? "-" : string.Join(",", a.BindIndices))}");
        foreach (var b in a.BoneAnims) {
            Console.WriteLine($" {b.Name} base={b.FlagsBase} curve={b.FlagsCurve} xf={b.FlagsTransform} beginR={b.BeginRotate} beginT={b.BeginTranslate} beginBT={b.BeginBaseTranslate} S=({b.BaseData.Scale.X:0.###},{b.BaseData.Scale.Y:0.###},{b.BaseData.Scale.Z:0.###}) T=({b.BaseData.Translate.X:0.###},{b.BaseData.Translate.Y:0.###},{b.BaseData.Translate.Z:0.###}) R=({b.BaseData.Rotate.X:0.###},{b.BaseData.Rotate.Y:0.###},{b.BaseData.Rotate.Z:0.###},{b.BaseData.Rotate.W:0.###})");
            foreach (var c in b.Curves) {
                var keys = Enumerable.Range(0, Math.Min(4, c.Keys.GetLength(0))).Select(i => "[" + string.Join(" ", Enumerable.Range(0, c.Keys.GetLength(1)).Select(j => c.Keys[i, j].ToString("0.####"))) + "]");
                Console.WriteLine($"   offs={c.AnimDataOffset} type={c.CurveType} ft={c.FrameType} kt={c.KeyType} n={c.Frames.Length} start={c.StartFrame} end={c.EndFrame} scale={c.Scale} off={(float)c.Offset} delta={c.Delta} wrap={c.PreWrap}/{c.PostWrap} frames=[{string.Join(",", c.Frames.Take(5))}] keys={string.Join("", keys)}");
            }
        }
    }

    static void Info(ResFile res)
    {
        foreach (var a in res.TexPatternAnims.Values) {
            if (!a.Name.Contains("switch"))
                continue;
            Console.WriteLine($"{a.Name} frames={a.FrameCount} baked={a.BakedSize} computed={Baked(a)} textures=[{string.Join(",", a.TextureNames.Keys)}]");
            foreach (var d in a.MaterialAnimDataList) {
                Console.WriteLine($"  {d.Name} patterns=[{string.Join(",", d.PatternAnimInfos.Select(p => $"{p.Name}:c{p.CurveIndex}:b{p.BeginConstant}"))}] base=[{string.Join(",", d.BaseDataList ?? new ushort[0])}]");
                foreach (var c in d.Curves)
                    Console.WriteLine($"    curve type={c.CurveType} frameType={c.FrameType} keyType={c.KeyType} scale={c.Scale} offset={c.Offset} delta={c.Delta} target={c.AnimDataOffset} " +
                                      $"end={c.EndFrame} frames=[{string.Join(",", c.Frames)}] keys=[{string.Join(",", Enumerable.Range(0, c.Keys.GetLength(0)).Select(i => c.Keys[i, 0]))}]");
            }
        }
        foreach (var t in Bntx(res).Textures)
            Console.WriteLine($"tex {t.Name} {t.Format} {t.Width}x{t.Height} mips={t.MipCount} tile={t.TileMode} bh={t.BlockHeightLog2} align={t.Alignment} arrays={t.ArrayLength} size={t.TextureData[0].Sum(m => m.Length)} [{string.Join(",", t.TextureData[0].Select(m => m.Length))}]");
    }

    static float Number(string s) => float.Parse(s, System.Globalization.CultureInfo.InvariantCulture);

    static void Apply(ResFile res, string source, string[] job)
    {
        var bntx = Bntx(res);
        foreach (var line in job) {
            var w = line.Split(' ', StringSplitOptions.RemoveEmptyEntries);
            if (w.Length == 0)
                continue;
            if (w[0] == "texture")
                AddTexture(bntx, w[1], w[2], w.Skip(3).ToArray());
            else if (w[0] == "frame")
                AddFrame(res, w[1], int.Parse(w[2]), w[3], w[4], w[5]);
            else if (w[0] == "model")
                AddModel(res, source, w[1], w[2], w[3], w[4]);
            else if (w[0] == "texanim")
                AddTexAnim(res, source, w[1], w[2], w[3], w.Skip(4).ToArray());
            else if (w[0] == "sklanim")
                AddSklAnim(res, source, w[1], w[2], int.Parse(w[3]), w[4] == "loop", w.Length > 5);
            else if (w[0] == "rebind")
                Rebind(res, w[1], int.Parse(w[2]), int.Parse(w[3]), Number(w[4]));
            else if (w[0] == "material")
                SwapMaterial(res, w[1], w[2], w[3], w[4], w[5], w[6].Split(','));
            else if (w[0] == "skin")
                Skin(res, w[1], int.Parse(w[2]), w[3].Split(',').Select(int.Parse).ToArray());
            else if (w[0] == "arm")
                Arm(res, w[1], w[2], w[3], int.Parse(w[4]), Number(w[5]), Number(w[6]), Number(w[7]), Number(w[8]), Number(w[9]), Number(w[10]), Number(w[11]), Number(w[12]));
            else if (w[0] == "armanim")
                ArmAnim(res, w[1], w[2], w[3], w.Skip(4).Select(Number).ToArray());
            else if (w[0] == "base")
                SetBase(res, w[1], w[2], w.Skip(3).Select(Number).ToArray());
            else if (w[0] == "clear")
                res.SkeletalAnims[w[1]].BoneAnims.First(b => b.Name == w[2]).Curves.Clear();
            else if (w[0] == "curve")
                AddCurve(res, w[1], w[2], uint.Parse(w[3]), w[4].Split(',').Select(Number).ToArray(), w[5].Split(',').Select(Number).ToArray());
            else
                throw new Exception("bad job line: " + line);
        }
    }

    static void AddTexture(BntxFile bntx, string name, string from, string[] mips)
    {
        var src = bntx.Textures.First(t => t.Name == from);
        var t = (Texture)typeof(object).GetMethod("MemberwiseClone", System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.NonPublic)!.Invoke(src, null);
        t.Name = name;

        // The loader gives each mip the bytes from its offset to the end of the surface, so
        // TextureData[0][0] is the whole surface and the rest are its tails.
        var surface = File.ReadAllBytes(mips[0]);
        var levels = src.TextureData[0];
        if (surface.Length != levels[0].Length)
            throw new Exception($"{name}: {surface.Length} bytes, {from} has {levels[0].Length}");
        t.TextureData = new List<List<byte[]>> { levels.Select(l => surface[(surface.Length - l.Length)..]).ToList() };

        bntx.Textures.Add(t);
        bntx.TextureDict.Add(name);
    }

    // A second copy of a model, with its own texture. Loaded again so that it shares nothing.
    static void AddModel(ResFile res, string source, string name, string from, string material, string texture)
    {
        var model = Load(source).Models[from];
        model.Name = name;
        model.Materials[material].TextureRefs[0] = new TextureRef { Name = texture };
        res.Models.Add(name, model);
    }

    // A texture-pattern animation with one frame per texture, as the Biddybud's "bud".
    static void AddTexAnim(ResFile res, string source, string name, string from, string material, string[] textures)
    {
        var a = Load(source).TexPatternAnims[from];
        a.Name = name;
        a.TextureNames = new ResDict<TextureRef>();
        foreach (var t in textures)
            a.TextureNames.Add(t, new TextureRef { Name = t });
        var d = a.MaterialAnimDataList[0];
        d.Name = material;
        d.BaseDataList = new ushort[] { 0 };
        var curve = d.Curves[0];
        int n = textures.Length;
        curve.Frames = Enumerable.Range(0, n).Select(i => (float)i).ToArray();
        var keys = new float[n, 1];
        for (int i = 0; i < n; i++)
            keys[i, 0] = i;
        curve.Keys = keys;
        curve.EndFrame = n - 1;
        curve.Delta = BitConverter.Int32BitsToSingle(n - 1);
        a.FrameCount = n;
        res.TexPatternAnims.Add(name, a);
    }

    // A copy of a skeletal animation, with no curves left: `base` and `curve` lines build it.
    static void AddSklAnim(ResFile res, string source, string name, string from, int frames, bool loop, bool keepCurves)
    {
        var a = Load(source).SkeletalAnims[from];
        a.Name = name;
        a.FrameCount = frames;
        a.FlagsAnimSettings = loop ? SkeletalAnimFlags.Looping : 0;
        if (!keepCurves)
            foreach (var b in a.BoneAnims)
                b.Curves.Clear();
        res.SkeletalAnims.Add(name, a);
    }

    // Moves the vertices of skin matrix `from` that sit at or above `minY` to matrix `to`.
    // Smooth matrices work in model space, so nothing else about a vertex changes.
    static void Rebind(ResFile res, string name, int from, int to, float minY)
    {
        var model = res.Models[name];
        foreach (var shape in model.Shapes.Values) {
            var h = new BfresLibrary.Helpers.VertexBufferHelper(model.VertexBuffers[shape.VertexBufferIndex], res.ByteOrder);
            var positions = h["_p0"].Data;
            var indices = h["_i0"].Data;
            int moved = 0;
            for (int v = 0; v < indices.Length; v++)
                if ((int)indices[v].X == from && positions[v].Y >= minY) {
                    indices[v].X = to;
                    moved++;
                }
            h["_i0"].Data = indices;
            model.VertexBuffers[shape.VertexBufferIndex] = h.ToVertexBuffer();
            var bones = shape.SkinBoneIndices.ToList();
            ushort bone = model.Skeleton.MatrixToBoneList[to];
            if (!bones.Contains(bone))
                bones.Add(bone);
            shape.SkinBoneIndices = bones;
            Console.WriteLine($"{shape.Name}: {moved} vertices moved");
        }
    }

    // material <model> <material> <template.bfres> <template model> <template material> <textures>:
    // gives a material another model's shader binding, keeping its name and using these textures.
    // The archive needs that model's .bfsha. Attributes the new program does not read go, as
    // every shape needs (docs/WIIU_MODELS.md).
    static void SwapMaterial(ResFile res, string modelName, string name, string template, string templateModel,
                             string templateMaterial, string[] textures)
    {
        var model = res.Models[modelName];
        var from = Load(template).Models[templateModel].Materials[templateMaterial];
        var mat = model.Materials[name];
        int index = model.Materials.Keys.ToList().IndexOf(name);
        mat.ShaderAssign = from.ShaderAssign;
        mat.ShaderParams = from.ShaderParams;
        mat.ShaderParamData = from.ShaderParamData;
        mat.RenderInfos = from.RenderInfos;
        mat.Samplers = from.Samplers;
        mat.Flags = from.Flags;
        mat.TextureRefs = textures.Select(t => new TextureRef { Name = t }).ToList();

        var keep = from.ShaderAssign.AttribAssigns.Keys.ToHashSet();
        foreach (var shape in model.Shapes.Values) {
            if (shape.MaterialIndex != index)
                continue;
            var vb = model.VertexBuffers[shape.VertexBufferIndex];
            foreach (var attribute in vb.Attributes.Keys.ToList())
                if (!keep.Contains(attribute)) {
                    int buffer = vb.Attributes[attribute].BufferIndex;
                    vb.Attributes.RemoveKey(attribute);
                    vb.Buffers.RemoveAt(buffer);
                    foreach (var a in vb.Attributes.Values)
                        if (a.BufferIndex > buffer)
                            a.BufferIndex--;
                }
        }
    }

    // Puts the listed vertices on skin matrix `to`.
    static void Skin(ResFile res, string name, int to, int[] vertices)
    {
        var model = res.Models[name];
        foreach (var shape in model.Shapes.Values) {
            var h = new BfresLibrary.Helpers.VertexBufferHelper(model.VertexBuffers[shape.VertexBufferIndex], res.ByteOrder);
            var indices = h["_i0"].Data;
            foreach (var v in vertices)
                indices[v].X = to;
            h["_i0"].Data = indices;
            model.VertexBuffers[shape.VertexBufferIndex] = h.ToVertexBuffer();
        }
    }

    // Makes `bone` a child of `parent` at (tx ty tz), turned so that it lies along the model's
    // axes, and moves the vertices of matrix `from` on one side (x * side >= minX, y >= minY) to
    // it. Those use its rigid matrix, which has no inverse bind: a vertex is given in the bone's
    // space, here just its offset from the pivot. Rest pose and normals stay as they were.
    static void Arm(ResFile res, string name, string boneName, string parent, int from, float side, float minX, float minY,
                    float pivotX, float pivotY, float pivotZ, float tx, float ty)
    {
        var model = res.Models[name];
        var names = model.Skeleton.Bones.Keys.ToList();
        var bone = model.Skeleton.Bones[boneName];
        short index = (short)names.IndexOf(boneName);
        bone.ParentIndex = (short)names.IndexOf(parent);
        bone.Position = new Syroot.Maths.Vector3F(tx, ty, 0.0f);
        bone.Rotation = new Syroot.Maths.Vector4F(0.0f, 0.0f, -0.7071068f, 0.7071068f);
        bone.Scale = new Syroot.Maths.Vector3F(1.0f, 1.0f, 1.0f);
        bone.FlagsTransform = BoneFlagsTransform.None;
        bone.FlagsTransformCumulative = BoneFlagsTransformCumulative.None;
        int matrix = model.Skeleton.MatrixToBoneList.ToList().LastIndexOf((ushort)index);

        foreach (var shape in model.Shapes.Values) {
            var h = new BfresLibrary.Helpers.VertexBufferHelper(model.VertexBuffers[shape.VertexBufferIndex], res.ByteOrder);
            var positions = h["_p0"].Data;
            var indices = h["_i0"].Data;
            int moved = 0;
            for (int v = 0; v < indices.Length; v++)
                if ((int)indices[v].X == from && positions[v].X * side >= minX && positions[v].Y >= minY) {
                    indices[v].X = matrix;
                    positions[v].X -= pivotX;
                    positions[v].Y -= pivotY;
                    positions[v].Z -= pivotZ;
                    moved++;
                }
            h["_p0"].Data = positions;
            h["_i0"].Data = indices;
            model.VertexBuffers[shape.VertexBufferIndex] = h.ToVertexBuffer();
            var bones = shape.SkinBoneIndices.ToList();
            if (!bones.Contains((ushort)index))
                bones.Add((ushort)index);
            shape.SkinBoneIndices = bones;
            Console.WriteLine($"{name}/{boneName}: {moved} vertices, matrix {matrix}");
        }
    }

    // armanim <anim> <bone> <spare> sx sy sz tx ty tz rx ry rz: drives `bone` in an animation,
    // with no curves left. An animation made for another rig has no entry for it, so `spare`,
    // an entry the skeleton does not use, is renamed.
    static void ArmAnim(ResFile res, string anim, string bone, string spare, float[] v)
    {
        var a = res.SkeletalAnims[anim];
        var b = a.BoneAnims.FirstOrDefault(x => x.Name == bone) ?? a.BoneAnims.First(x => x.Name == spare);
        b.Name = bone;
        b.Curves.Clear();
        b.FlagsTransform = BoneAnimFlagsTransform.SegmentScaleCompensate;
        SetBase(res, anim, bone, v);
    }

    // base <anim> <bone> sx sy sz tx ty tz rx ry rz (Euler radians)
    static void SetBase(ResFile res, string anim, string bone, float[] v)
    {
        var b = res.SkeletalAnims[anim].BoneAnims.First(x => x.Name == bone);
        var d = b.BaseData;
        d.Scale = new Syroot.Maths.Vector3F(v[0], v[1], v[2]);
        d.Translate = new Syroot.Maths.Vector3F(v[3], v[4], v[5]);
        d.Rotate = new Syroot.Maths.Vector4F(v[6], v[7], v[8], 1.0f);
        b.BaseData = d;
    }

    // curve <anim> <bone> <offset> <frames> <c0 c1 c2 c3 per span>: AnimDataOffset is the byte
    // offset of the channel: scale 4 8 12, translate 16 20 24, rotate 32 36 40.
    static void AddCurve(ResFile res, string anim, string bone, uint offset, float[] frames, float[] coefficients)
    {
        var a = res.SkeletalAnims[anim];
        var b = a.BoneAnims.First(x => x.Name == bone);
        b.FlagsTransform &= BoneAnimFlagsTransform.SegmentScaleCompensate;     // no "scale is 1" or "rotation is 0" left
        int n = frames.Length;
        var keys = new float[n, 4];
        for (int i = 0; i < n * 4; i++)
            keys[i / 4, i % 4] = coefficients[i];
        b.Curves.Add(new AnimCurve {
            CurveType = AnimCurveType.Cubic,
            FrameType = AnimCurveFrameType.Single,
            KeyType = AnimCurveKeyType.Single,
            PreWrap = WrapMode.Clamp,
            PostWrap = WrapMode.Clamp,
            AnimDataOffset = offset,
            StartFrame = 0,
            EndFrame = a.FrameCount,
            Scale = 1.0f,
            Offset = 0.0f,
            Delta = 0.0f,
            Frames = frames,
            Keys = keys,
        });
        b.Curves = b.Curves.OrderBy(c => c.AnimDataOffset).ToList();
    }

    static void AddFrame(ResFile res, string anim, int frame, string material, string sampler, string texture)
    {
        var a = res.TexPatternAnims[anim];
        if (!a.TextureNames.ContainsKey(texture))
            a.TextureNames.Add(texture, new TextureRef { Name = texture });
        int index = a.TextureNames.Keys.ToList().IndexOf(texture);

        var d = a.MaterialAnimDataList.First(m => m.Name == material);
        var curve = d.Curves[d.PatternAnimInfos.First(p => p.Name == sampler).CurveIndex];

        curve.Frames = curve.Frames.Append((float)frame).ToArray();
        int n = curve.Keys.GetLength(0);
        var keys = new float[n + 1, curve.Keys.GetLength(1)];
        Array.Copy(curve.Keys, keys, curve.Keys.Length);
        keys[n, 0] = index - (int)curve.Offset;     // Toadette's are stored minus 1
        curve.Keys = keys;
        curve.Delta = BitConverter.Int32BitsToSingle((int)keys[n, 0] - (int)keys[0, 0]);   // an int, on StepInt
        curve.EndFrame = Math.Max(curve.EndFrame, frame);
        a.FrameCount = Math.Max(a.FrameCount, frame);
        a.BakedSize = Baked(a);
    }

    // What every retail switch animation stores (Info prints both): nn::g3d bakes each curve
    // into a buffer of this size. Frames in floats take 4 bytes a frame, in bytes 2.
    static uint Baked(MaterialAnim a)
    {
        uint size = 0;
        foreach (var d in a.MaterialAnimDataList)
            foreach (var c in d.Curves) {
                uint unit = c.FrameType == AnimCurveFrameType.Single ? 4u : 2u;
                size += (16 + unit * ((uint)c.EndFrame + 1) + 7) & ~7u;
            }
        return size;
    }
}
