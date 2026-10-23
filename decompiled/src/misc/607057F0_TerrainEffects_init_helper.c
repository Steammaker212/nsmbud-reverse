/* TerrainEffects_init_helper
 * address: 0x607057F0   size: 1512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall TerrainEffects_init_helper(int a1, int a2, void *a3)
{
  int v5; // r7
  int v6; // r3
  int v7; // r0
  int v8; // r1
  nn__util__BinaryFileHeader *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r0
  float v16; // s2
  int v17; // r2
  int v18; // r6
  float v19; // r5
  float v20; // s4
  float *v21; // r4
  int v22; // r7
  float v23; // s0
  int *v24; // r0
  int v25; // r3
  float v26; // s0
  float v27; // s0
  int v28; // r3
  __int64 v29; // d17
  __int64 v30; // d17
  __int64 v31; // d17
  unsigned int result; // r0
  int v33; // r7
  int v34; // r0
  int v35; // r8
  int v36; // r6
  int v37; // r1
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r2
  int v41; // r3
  float v42; // s0
  int v43; // r0
  int v44; // r10
  float v45; // s0
  int v46; // r7
  __int64 v47; // d17
  _QWORD *v48; // r0
  _QWORD *v49; // r1
  __int64 v50; // d17
  __int64 v51; // d17
  int v52; // r5
  int v53; // r9
  int v54; // r6
  int v55; // r11
  int v56; // r0
  int v57; // [sp+0h] [bp-68h]
  int v59; // [sp+10h] [bp-58h]
  int v60; // [sp+10h] [bp-58h]
  int v61; // [sp+14h] [bp-54h] BYREF
  int v62; // [sp+18h] [bp-50h] BYREF
  char *v63; // [sp+1Ch] [bp-4Ch]
  int v64; // [sp+20h] [bp-48h] BYREF
  char *v65; // [sp+24h] [bp-44h]

  v5 = operator_new_8DE25C(0x1C3C0u, a3, 4);
  sub_60448BFC((_DWORD *)(v5 + 4));
  memset((void *)(v5 + 68), 0, 88);
  *(_DWORD *)v5 = &off_60C20FD0;
  FIELD_U32(v5, 115356) = -1;
  FIELD_U8(v5, 115360) = 0;
  FIELD_U8(v5, 115361) = -1;
  FIELD_U8(v5, 115362) = -1;
  FIELD_U8(v5, 115363) = -1;
  FIELD_U32(v5, 115364) = 0;
  FIELD_U32(v5, 115372) = 0;
  agl_TextureData_ref(v5 + 115376);
  FIELD_U32(a1, 4) = v5;
  v6 = FIELD_U8(a1, 232);
  v7 = TileMgr_instance;
  if ( !*(_BYTE *)(TileMgr_instance + v6 + 45016) )
  {
    *(_BYTE *)(TileMgr_instance + v6 + 45016) = 1;
    v8 = FIELD_U8(a1, 232);
    v64 = (int)&sead__SafeStringBase__vtable;
    v62 = (int)&sead__SafeStringBase__vtable;
    v65 = off_60C20F34[v8];
    v63 = off_60C20F48[v8];
    v9 = (nn__util__BinaryFileHeader *)sub_608226EC(ArchiveManagerMaybe_instance, &v64, &v62, 0);
    FIELD_U32(a1, 65352) = sub_6086EDAC(v9);
    v10 = FIELD_U8(a1, 232);
    v64 = (int)&sead__SafeStringBase__vtable;
    v62 = (int)&sead__SafeStringBase__vtable;
    v65 = off_60C20F34[v10];
    v63 = off_60C20F5C[v10];
    output_bfres_ref_448C14(&v64, &v62, TileMgr_instance + 272 * v10 + 45024, (_DWORD *)(a1 + 65352), 0);
    v11 = FIELD_U8(a1, 232);
    v64 = (int)&sead__SafeStringBase__vtable;
    v62 = (int)&sead__SafeStringBase__vtable;
    v65 = off_60C20F34[v11];
    v63 = off_60C20F70[v11];
    output_bfres_ref_448C14(&v64, &v62, TileMgr_instance + 272 * v11 + 46384, (_DWORD *)(a1 + 65352), 0);
    v6 = FIELD_U8(a1, 232);
    v7 = TileMgr_instance;
    v5 = FIELD_U32(a1, 4);
  }
  v12 = v7 + 272 * v6;
  v13 = v12 + 46384;
  v14 = v12 + 45024;
  if ( a2 == 1 )
    v15 = 11;
  else
    v15 = 15;
  TerrainEffects_init_helper_helper_44C1FC(v5, v14, v13, v6, -1, v15);
  v16 = 0.0;
  v17 = 0x40000000;
  v18 = 0;
  v19 = 0.0;
  v20 = 2.0;
  do
  {
    v20 = v20 + 2.0;
    v16 = v16 + 2.0;
    v21 = (float *)(FIELD_U32(a1, 4) + v18);
    v18 += 8;
    v21[39] = v19;
    v21[40] = 0.0;
    *((_DWORD *)v21 + 14439) = v17;
    v17 = LODWORD(v20);
    v19 = v16;
    v21[14440] = 0.0;
  }
  while ( v18 != 57608 );
  v59 = a2;
  TerrainEffects_init_helper_helper_707504(a1, 57756, LODWORD(v20), 57760, v57);
  v22 = FIELD_U32(a1, 16);
  v23 = FIELD_F32(a1, 20) + 4.0;
  v24 = (int *)(AreaTask_intance + 1812);
  if ( !FIELD_U8(a1, 233) )
    v24 = (int *)(a1 + 12);
  v25 = *v24;
  FIELD_U32(a1, 36) = *v24;
  FIELD_U32(a1, 40) = v22;
  FIELD_F32(a1, 44) = v23;
  FIELD_U32(a1, 48) = 1065353216;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 68) = 1065353216;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 1065353216;
  FIELD_U32(a1, 60) = v25;
  FIELD_U32(a1, 76) = v22;
  FIELD_F32(a1, 92) = v23;
  if ( FIELD_F32(a1, 156) != 0.0 )
  {
    v26 = FIELD_F32(a1, 160);
    FIELD_F32(a1, 48) = v26;
    v27 = v26 * 0.0;
    FIELD_F32(a1, 64) = v27;
    FIELD_F32(a1, 80) = v27;
  }
  v28 = FIELD_U32(a1, 4);
  v29 = FIELD_U64(a1, 56);
  FIELD_U64(v28, 4) = FIELD_U64(a1, 48);
  FIELD_U64(v28, 12) = v29;
  v30 = FIELD_U64(a1, 72);
  FIELD_U64(v28, 20) = FIELD_U64(a1, 64);
  FIELD_U64(v28, 28) = v30;
  v31 = FIELD_U64(a1, 88);
  FIELD_U64(v28, 36) = FIELD_U64(a1, 80);
  FIELD_U64(v28, 44) = v31;
  result = (unsigned __int8)(FIELD_U8(a1, 232) - 1);
  if ( result <= 1 )
  {
    v33 = 0;
    v61 = 0;
    v34 = TileMgr_instance;
    if ( !FIELD_U8(TileMgr_instance, 37088) )
    {
      v35 = 37096;
      v36 = 0;
      FIELD_U8(TileMgr_instance, 37088) = 1;
      while ( 1 )
      {
        v37 = FIELD_U8(a1, 232);
        v64 = (int)&sead__SafeStringBase__vtable;
        v62 = (int)&sead__SafeStringBase__vtable;
        v65 = off_60C20F84[v37];
        v63 = off_60C20F98[v36];
        output_bfres_ref_448C14(&v64, &v62, v34 + v35, &v61, 0);
        if ( v36 == 11 )
          break;
        v34 = TileMgr_instance;
        ++v36;
        v35 += 272;
      }
    }
    v38 = (_DWORD *)operator_new_8DE25C(0x2E0u, a3, 4);
    v39 = sub_60448BFC(v38);
    do
    {
      v40 = &v39[v33];
      v33 += 8;
      v40[17] = 255;
      v40[18] = 255;
    }
    while ( v33 != 160 );
    FIELD_U32(a1, 8) = v39;
    if ( v59 == 1 )
      v41 = 12;
    else
      v41 = 15;
    TerrainEffects_init_helper_helper_44E288(v39, TileMgr_instance + 37096, -1, v41);
    v64 = -1;
    v62 = 255;
    TerrainEffects_init_helper_helper_707734(a1, &v64, &v62);
    v42 = FIELD_F32(a1, 20);
    v43 = FIELD_U32(a1, 16);
    v44 = 0;
    FIELD_U32(a1, 24) = 0;
    FIELD_U32(a1, 28) = v43;
    v45 = v42 + 8.0;
    FIELD_F32(a1, 32) = v45;
    FIELD_U32(a1, 96) = 1065353216;
    FIELD_U32(a1, 100) = 0;
    FIELD_U32(a1, 104) = 0;
    FIELD_U32(a1, 112) = 0;
    FIELD_U32(a1, 116) = 1065353216;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 1065353216;
    FIELD_U32(a1, 108) = 0;
    FIELD_U32(a1, 124) = v43;
    FIELD_F32(a1, 140) = v45;
    v46 = 76;
    v47 = FIELD_U64(a1, 104);
    v48 = *(_QWORD **)(a1 + 8);
    v49 = v48 + 4;
    *v48 = FIELD_U64(a1, 96);
    v48[1] = v47;
    v48 += 2;
    v50 = FIELD_U64(a1, 120);
    *v48 = FIELD_U64(a1, 112);
    v48[1] = v50;
    v51 = FIELD_U64(a1, 136);
    *v49 = FIELD_U64(a1, 128);
    v49[1] = v51;
    v52 = v64;
    v60 = v62;
    do
    {
      v53 = FIELD_U32(a1, 8);
      v54 = a1;
      v55 = v53 + v46;
      *(_DWORD *)(v55 - 28) = 0;
      *(_DWORD *)(v55 - 24) = 0;
      *(_DWORD *)(v55 - 20) = 0;
      *(_BYTE *)(v55 - 12) = 1;
      *(float *)(v55 - 16) = (float)((float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000)
                                           + -1.0)
                                   * 2.5)
                           + 7.5;
      *(_BYTE *)(v55 - 11) = v44;
      *(_DWORD *)(v55 - 8) = v52;
      *(_DWORD *)(v55 - 4) = v60;
      a1 = v54;
      *(_BYTE *)(v53 + v46) = 0;
      v56 = v44 + 1;
      v46 += 32;
      if ( v44 > 11 )
        v56 = 0;
      v44 = v56;
    }
    while ( v46 != 716 );
    FIELD_U32(v54, 172) = 20;
    return 20;
  }
  return result;
}
