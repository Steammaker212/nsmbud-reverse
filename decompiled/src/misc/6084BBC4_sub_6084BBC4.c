/* sub_6084BBC4
 * address: 0x6084BBC4   size: 2104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6084BBC4(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v10; // r8
  int Alignment_const; // r0
  char *v12; // r6
  nn__util__BinaryFileHeader *v13; // r0
  int FirstBlock; // r4
  int v15; // r5
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // r2
  int v21; // r2
  int v22; // r2
  int i; // r11
  int v24; // r9
  int v25; // r8
  _DWORD *v26; // r5
  int v27; // r5
  int v28; // r6
  int v29; // r9
  unsigned int v30; // r0
  unsigned int v31; // r4
  int v32; // r0
  int v33; // r7
  int v34; // r6
  int v35; // r5
  int v36; // r1
  int v37; // r0
  _DWORD *v38; // r6
  int v39; // r7
  int v40; // r0
  int v41; // r7
  _DWORD *v42; // r11
  int v43; // r0
  _WORD *v44; // r0
  _DWORD *v45; // r6
  _DWORD *v46; // r6
  int v48; // [sp+Ch] [bp-ACh]
  int v49; // [sp+10h] [bp-A8h]
  int v50; // [sp+14h] [bp-A4h]
  char *v51; // [sp+18h] [bp-A0h]
  unsigned int v52; // [sp+18h] [bp-A0h]
  int v53; // [sp+1Ch] [bp-9Ch]
  int v54; // [sp+20h] [bp-98h]
  _DWORD *v55; // [sp+24h] [bp-94h]
  _DWORD v56[4]; // [sp+28h] [bp-90h] BYREF
  _DWORD v57[10]; // [sp+38h] [bp-80h] BYREF
  float v58[22]; // [sp+60h] [bp-58h] BYREF

  nn__util__ReferSymbol((nn__util *)"SDK MW+Nintendo+NintendoWare_Font-4_4_0-Release", a2);
  v10 = 0;
  if ( !FIELD_U32(a1, 132) )
  {
    v50 = a4;
    FIELD_U32(a1, 1032) = a3;
    Alignment_const = nn__util__BinaryFileHeader__GetAlignment_const((nn__util__BinaryFileHeader *)aBnsh);
    v12 = (char *)((a3 + Alignment_const - 1) & -Alignment_const);
    qmemcpy(v12, aBnsh, 0x8438u);
    v13 = sub_6083D5D4((nn__util__BinaryFileHeader *)v12);
    FIELD_U32(a1, 4) = v13;
    FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(v13);
    sub_6083B088(FirstBlock, a2, 0, 0);
    v15 = FIELD_U32(FirstBlock, 32);
    v16 = *(_DWORD *)(v15 + dword_60BF9D80[0]);
    FIELD_U32(a1, 8) = 0;
    if ( !v16 || sub_6083B4F8(FIELD_U32(v16, 104), a2, v16) )
    {
      v17 = *(_DWORD *)(v15 + dword_60BF9D88);
      FIELD_U32(a1, 8) = 2;
      sub_6083B4F8(FIELD_U32(v17, 104), a2, v17);
    }
    v51 = v12 + 33848;
    v18 = *(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 64);
    sub_6083B4F8(FIELD_U32(v18, 104), a2, v18);
    v19 = *(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 128);
    sub_6083B4F8(FIELD_U32(v19, 104), a2, v19);
    v20 = *(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 192);
    sub_6083B4F8(FIELD_U32(v20, 104), a2, v20);
    v21 = *(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 256);
    sub_6083B4F8(FIELD_U32(v21, 104), a2, v21);
    v22 = *(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 320);
    v55 = a2;
    sub_6083B4F8(FIELD_U32(v22, 104), a2, v22);
    for ( i = 0; i != 24; i += 4 )
    {
      v24 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(a1 + 4))
                                              + 32)
                                  + dword_60BF9D80[FIELD_U32(a1, 8)]
                                  + 16 * i)
                      + 104);
      v25 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(a1 + 4))
                                              + 32)
                                  + dword_60BF9D80[FIELD_U32(a1, 8)]
                                  + 16 * i)
                      + 104);
      v26 = (_DWORD *)(a1 + i);
      *(_DWORD *)(a1 + i + 12) = sub_6083BDB8(v24, 0, 3, "ShaderParam");
      v26[9] = sub_6083BDB8(v24, 0, 4, "PerCharacterParamBlock");
      v26[15] = sub_6083BDB8(v25, 4, 3, "ShaderParam");
      v26[21] = sub_6083BDB8(v25, 4, 3, "ShaderParamBlackWhiteInterpolation");
      v26[27] = sub_6083BDB8(v25, 4, 2, "uTextureSrc");
    }
    memset(v58, 0, 48);
    sub_6083D7A8((int)v58);
    memset(v57, 0, sizeof(v57));
    sub_6083D774((int)v57);
    v27 = 0;
    memset(v56, 0, sizeof(v56));
    v57[4] = "aVertex";
    LOWORD(v57[1]) = 0;
    v57[3] = 6149;
    v57[2] = 0;
    sub_6083D798(v56);
    LODWORD(v58[2]) = v57;
    v56[0] = 28;
    LODWORD(v58[0]) = 65537;
    LODWORD(v58[4]) = v56;
    v28 = sub_6083C978((unsigned __int16 *)v58);
    v29 = a1 + 136;
    v30 = (unsigned int)v51;
    do
    {
      v31 = (v30 + 7) & 0xFFFFFFF8;
      sub_6083C9F4(v29 + v27, v31, v28);
      v32 = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(a1 + 4));
      sub_6083CA08(
        v29 + v27,
        (int)a2,
        (unsigned __int16 *)v58,
        *(_DWORD *)(*(_DWORD *)(FIELD_U32(v32, 32) + dword_60BF9D80[FIELD_U32(a1, 8)] + 2 * v27) + 104));
      v27 += 32;
      v30 = v31 + v28;
    }
    while ( v27 != 192 );
    v52 = v31 + v28;
    memset(v58, 0, 32);
    sub_60998EA8(v58);
    LOWORD(v58[0]) = 0;
    HIWORD(v58[1]) = 41;
    sub_6083B2BC(a1 + 904, (int)a2, v58);
    FIELD_U32(a1, 1024) = -1;
    FIELD_U32(a1, 1028) = -1;
    memset(v58, 0, 32);
    sub_6083D5C0(v58);
    v48 = sub_6083650C();
    v53 = sub_60836514();
    memset(v57, 0, 16);
    sub_6083D5B0(v57);
    v57[1] = 8;
    v33 = sub_608352A0(a2, (int)v57);
    memset(v57, 0, 16);
    sub_6083D5B0(v57);
    v57[1] = 16;
    v34 = sub_608352A0(v55, (int)v57);
    memset(v57, 0, 16);
    sub_6083D5B0(v57);
    v57[1] = 16;
    v35 = (int)a5;
    if ( a5 )
      v35 = a6;
    v36 = -v34;
    v49 = (v35 + v33 + 111) & -v33;
    v37 = v49 + v34;
    v38 = a5;
    v39 = (v37 + 11) & v36;
    v40 = sub_608352A0(v55, (int)v57);
    v54 = v39;
    v41 = (v39 + v40 + 3) & -v40;
    if ( !a5 )
    {
      v38 = (_DWORD *)(a1 + 328);
      LODWORD(v58[2]) = (v52 + v48 - 1) & -v48;
      LODWORD(v58[1]) = (3 - a6 + v53 + v41) & -v53;
      LODWORD(v58[0]) = 34;
      sub_60836538(a1 + 328, v55, v58);
    }
    v42 = v38;
    memset(v57, 0, 16);
    sub_6083D5B0(v57);
    v57[0] = 112;
    v57[1] = 4;
    sub_608353C0(a1 + 616, v55, v57, v38, v35);
    v43 = sub_608354C4(a1 + 616);
    *(_DWORD *)v43 = 0;
    FIELD_U32(v43, 4) = 0;
    FIELD_U32(v43, 8) = 0;
    FIELD_U8(v43, 12) = -1;
    FIELD_U8(v43, 15) = -1;
    FIELD_U8(v43, 14) = -1;
    FIELD_U8(v43, 13) = -1;
    FIELD_U32(v43, 16) = 0;
    FIELD_U32(v43, 20) = 1065353216;
    FIELD_U32(v43, 24) = 0;
    FIELD_U32(v43, 28) = 1065353216;
    FIELD_U32(v43, 32) = 0;
    FIELD_U32(v43, 36) = 0;
    FIELD_U8(v43, 40) = -1;
    FIELD_U8(v43, 43) = -1;
    FIELD_U8(v43, 42) = -1;
    FIELD_U8(v43, 41) = -1;
    FIELD_U32(v43, 44) = 1065353216;
    FIELD_U32(v43, 48) = 1065353216;
    FIELD_U32(v43, 52) = 0;
    FIELD_U32(v43, 56) = 0;
    FIELD_U32(v43, 60) = 1065353216;
    FIELD_U32(v43, 64) = 0;
    FIELD_U8(v43, 68) = -1;
    FIELD_U8(v43, 71) = -1;
    FIELD_U8(v43, 70) = -1;
    FIELD_U8(v43, 69) = -1;
    FIELD_U32(v43, 72) = 0;
    FIELD_U32(v43, 76) = 0;
    FIELD_U32(v43, 80) = 0;
    FIELD_U32(v43, 84) = 1065353216;
    FIELD_U32(v43, 88) = 1065353216;
    FIELD_U32(v43, 92) = 0;
    FIELD_U8(v43, 96) = -1;
    v43 += 96;
    FIELD_U8(v43, 3) = -1;
    FIELD_U8(v43, 2) = -1;
    FIELD_U8(v43, 1) = -1;
    FIELD_U32(v43, 4) = 1065353216;
    FIELD_U32(v43, 8) = 0;
    FIELD_U32(v43, 12) = 0;
    nullsub_66();
    memset(v57, 0, 16);
    sub_6083D5B0(v57);
    v57[0] = 12;
    v57[1] = 8;
    sub_608353C0(a1 + 688, v55, v57, v38, v49);
    v44 = (_WORD *)sub_608354C4(a1 + 688);
    *v44 = 0;
    v10 = 1;
    v44[1] = 2;
    v44[2] = 3;
    v44[3] = 3;
    v44[4] = 1;
    v44[5] = 0;
    nullsub_66();
    memset(v57, 0, 16);
    sub_6083D5B0(v57);
    v57[0] = 4;
    v57[1] = 16;
    sub_608353C0(a1 + 760, v55, v57, v38, v54);
    v45 = (_DWORD *)sub_608354C4(a1 + 760);
    sub_60835504(a1 + 760);
    *v45 = 1;
    nullsub_66();
    memset(v57, 0, 16);
    sub_6083D5B0(v57);
    v57[0] = 4;
    v57[1] = 16;
    sub_608353C0(a1 + 832, v55, v57, v42, v41);
    v46 = (_DWORD *)sub_608354C4(a1 + 832);
    sub_60835504(a1 + 832);
    *v46 = 0;
    nullsub_66();
    FIELD_U32(a1, 132) = v50;
  }
  return v10;
}
