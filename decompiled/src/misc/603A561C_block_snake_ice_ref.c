/* block_snake_ice_ref
 * address: 0x603A561C   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall block_snake_ice_ref(int a1, unsigned int r1_0)
{
  void *ResArchiveById; // r8
  void *Model2; // r5
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v11; // s8
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r0
  unsigned int v15; // r2
  int *v16; // r0
  int v17; // r0
  int v18; // r0
  unsigned int v19; // r1
  int v20; // r0
  int v21; // r0
  unsigned int v22; // r1
  int v23; // r0
  int v24; // r0
  _DWORD *v25; // r0
  sead__SafeString a2; // [sp+14h] [bp-54h] BYREF
  int v27; // [sp+1Ch] [bp-4Ch]
  float v28; // [sp+20h] [bp-48h]
  int v29; // [sp+24h] [bp-44h]
  int v30; // [sp+28h] [bp-40h]
  int v31; // [sp+2Ch] [bp-3Ch]
  float v32; // [sp+30h] [bp-38h]
  int v33; // [sp+34h] [bp-34h]
  int v34; // [sp+38h] [bp-30h]
  int v35; // [sp+3Ch] [bp-2Ch]
  float v36; // [sp+40h] [bp-28h]

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(FIELD_U32(a1, 728) + 12), r1_0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = off_60BF4758[r1_0];
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 1, 2, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 1, 2, 0, 0);
  ModelWrapper_setup(v7, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 672) = v6;
  v8 = FIELD_F32(a1, 676);
  v9 = FIELD_F32(a1, 680);
  v10 = FIELD_F32(a1, 684);
  v11 = *(float *)(FIELD_U32(a1, 728) + 23572);
  FIELD_F32(a1, 736) = v11 * 0.0625;
  FIELD_F32(a1, 740) = v11 * 0.0625;
  FIELD_F32(a1, 744) = v11 * 0.0625;
  a2.vtable = (void *)1065353216;
  a2.cstr = 0;
  v27 = 0;
  v29 = 0;
  v30 = 1065353216;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 1065353216;
  v28 = v8 + 0.0;
  v32 = v9 + 0.0;
  v36 = v10 + 0.0;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v6, 0x0) + 68))(FIELD_U32(v6, 0x0), a1 + 736);
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(***(_DWORD ***)(a1 + 672) + 60))(**(_DWORD **)(a1 + 672), &a2);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 672) + 52))(**(_DWORD **)(a1 + 672));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 672) + 56))(**(_DWORD **)(a1 + 672));
  v12 = **(_DWORD ***)(FIELD_U32(a1, 672) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ridden";
  ShuAnim_play(v12, (int)ResArchiveById, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 672) + 28) + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 672) + 28) + 4), 0);
  if ( r1_0 )
  {
    if ( r1_0 == 1 )
    {
      v13 = Profile__getResArchiveById(*(Profile **)(FIELD_U32(a1, 728) + 12), 1u);
      v14 = FIELD_U32(a1, 672);
      v15 = FIELD_U32(v14, 24);
      v16 = *(int **)(v14 + 28);
      if ( v15 > 1 )
        ++v16;
      v17 = *v16;
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "block_snake_ice";
      sub_60446088(v17, v13, (int)&a2);
      v18 = FIELD_U32(a1, 672);
      v19 = FIELD_U32(v18, 24);
      v20 = FIELD_U32(v18, 28);
      if ( v19 > 1 )
        v20 += 4;
      *(_DWORD *)(*(_DWORD *)v20 + 24) = 1065353216;
      v21 = FIELD_U32(a1, 672);
      v22 = FIELD_U32(v21, 24);
      v23 = FIELD_U32(v21, 28);
      if ( v22 > 1 )
        v23 += 4;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 1);
    }
  }
  else
  {
    v24 = **(_DWORD **)(FIELD_U32(a1, 672) + 20);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "touch";
    TexAnim_play(v24, ResArchiveById, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 672) + 20) + 4), 0);
    v25 = **(_DWORD ***)(FIELD_U32(a1, 672) + 20);
    v25[5] = v25[2];
    v25[7] |= 2u;
  }
}
