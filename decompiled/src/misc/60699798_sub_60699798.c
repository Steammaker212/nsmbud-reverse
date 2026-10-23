/* sub_60699798
 * address: 0x60699798   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60699798(int a1)
{
  _BOOL4 v2; // r6
  int v3; // r5
  float v4; // s22
  void (__fastcall ***v5)(_DWORD, _DWORD, int *, int *, int *); // r0
  void (__fastcall *v6)(_DWORD, _DWORD, int *, int *, int *); // r7
  float v7; // s4
  float v8; // s6
  float v9; // s20
  int v10; // r7
  float v11; // s18
  int v12; // r5
  float v13; // s0
  float v14; // s2
  int v15; // r0
  int v16; // r1
  float v17; // s0
  float v18; // s2
  int v19; // r0
  int v20; // r1
  int v22; // [sp+4h] [bp-84h] BYREF
  int v23; // [sp+8h] [bp-80h]
  int v24; // [sp+Ch] [bp-7Ch]
  int v25; // [sp+10h] [bp-78h] BYREF
  float v26; // [sp+14h] [bp-74h]
  int v27; // [sp+18h] [bp-70h]
  int v28; // [sp+1Ch] [bp-6Ch]
  int v29; // [sp+20h] [bp-68h]
  int v30; // [sp+24h] [bp-64h]
  int v31; // [sp+28h] [bp-60h]
  float v32; // [sp+2Ch] [bp-5Ch]
  int v33; // [sp+30h] [bp-58h]
  int v34; // [sp+34h] [bp-54h]
  int v35; // [sp+38h] [bp-50h]
  int v36; // [sp+3Ch] [bp-4Ch]

  FIELD_U32(a1, 116) = -1010302976;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  noboribou_obake_ref(a1);
  v2 = 0;
  v3 = FIELD_U32(a1, 20) & 0xF;
  v4 = (float)(unsigned int)(v3 + 1);
  FIELD_F32(a1, 664) = -8.0 - (float)(v4 * 8.0);
  FIELD_F32(a1, 668) = (float)(v4 * -16.0) + -16.0;
  FIELD_F32(a1, 672) = v4;
  v25 = 1065353216;
  v26 = v4;
  v5 = (void (__fastcall ***)(_DWORD, _DWORD, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 644) + 132))(
                                                                     **(_DWORD **)(a1 + 644),
                                                                     0);
  v6 = **v5;
  v22 = 0;
  v6(v5, 0, &v25, &v22, &dword_60B3B944);
  FIELD_F32(a1, 148) = v4;
  v7 = (float)(v4 * 16.0) * 0.5;
  v8 = FIELD_F32(a1, 112) - (float)(v7 + 8.0);
  FIELD_F32(a1, 112) = v8;
  FIELD_F32(a1, 656) = v7 + 16.0;
  FIELD_F32(a1, 660) = (float)((float)(v4 * -16.0) * 0.5) + -16.0;
  v9 = v8 + (float)(v7 + 16.0);
  v10 = (unsigned int)FIELD_F32(a1, 108);
  if ( (FIELD_U8(a1, 20) & 0xF0) == 0 )
    v2 = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 1u) != 0;
  v11 = v9 + -8.0;
  v12 = -2 - v3;
  do
  {
    TileMgr_setTile(TileMgr_instance, v10, (unsigned int)(float)-v11, v2, 86);
    v11 = v11 + -16.0;
    ++v12;
  }
  while ( v12 );
  v25 = 1065353216;
  v26 = 0.0;
  v27 = 0;
  v29 = 0;
  v30 = 1065353216;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 1065353216;
  v28 = FIELD_U32(a1, 108);
  v32 = FIELD_F32(a1, 112);
  v36 = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 644) + 68))(**(_DWORD **)(a1 + 644), a1 + 144);
  (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), &v25);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
  v13 = FIELD_F32(a1, 660);
  v14 = FIELD_F32(a1, 112);
  v15 = FIELD_U32(a1, 116);
  v16 = FIELD_U32(a1, 108);
  v22 = 1065353216;
  v23 = 1065353216;
  v25 = 1065353216;
  v26 = 0.0;
  v27 = 0;
  v29 = 0;
  v30 = 1065353216;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 1065353216;
  v24 = 1065353216;
  v28 = v16;
  v32 = v14 + v13;
  v36 = v15;
  (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 648) + 68))(**(_DWORD **)(a1 + 648), &v22);
  (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 648) + 60))(**(_DWORD **)(a1 + 648), &v25);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 648));
  v17 = FIELD_F32(a1, 656);
  v18 = FIELD_F32(a1, 112);
  v19 = FIELD_U32(a1, 116);
  v20 = FIELD_U32(a1, 108);
  v22 = 1065353216;
  v23 = 1065353216;
  v25 = 1065353216;
  v26 = 0.0;
  v27 = 0;
  v29 = 0;
  v30 = 1065353216;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 1065353216;
  v24 = 1065353216;
  v28 = v20;
  v32 = v18 + v17;
  v36 = v19;
  (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 652) + 68))(**(_DWORD **)(a1 + 652), &v22);
  (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 652) + 60))(**(_DWORD **)(a1 + 652), &v25);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 652));
  return 1;
}
