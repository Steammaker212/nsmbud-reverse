/* KoopaTroopa_onCreate_helper
 * address: 0x6035A168   size: 1060   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall KoopaTroopa_onCreate_helper(int *a1)
{
  sead__SafeString *v2; // r6
  void *Resource; // r9
  sead__SafeString *v4; // r1
  sead__SafeString *v5; // r8
  sead__SafeString *v6; // r4
  void *Model2; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  int *v10; // r11
  void *v11; // r7
  ModelWrapper *v12; // r6
  void *v13; // r10
  ModelWrapper *v14; // r6
  ModelWrapper *v15; // r0
  void *v16; // r8
  int v17; // r4
  int v18; // r10
  int v19; // r6
  int *v20; // r5
  int v21; // t1
  int v22; // r6
  int v23; // r4
  int v24; // r5
  int v25; // r5
  char v26; // r12
  int v27; // r5
  _DWORD *v28; // [sp+14h] [bp-2Ch]
  int v29; // [sp+18h] [bp-28h]

  v29 = 5 * a1[0x74D];
  v2 = (sead__SafeString *)&dword_60C955A0[10 * a1[0x74D]];
  v28 = a1 + 0x74D;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v2);
  v4 = v2 + 2;
  v5 = v2 + 1;
  if ( *v28 )
  {
    v6 = v2 + 1;
    Model2 = (void *)Resource_getModel2(Resource, v4, 2, 1, 1, 0, 1, 0, 0);
    v8 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v9 = sub_60421830(v8, Model2, 2, 1, 1, 0, 1);
    j_ModelWrapper_setupModel((int)v9, (int)Resource, 0, 0);
    a1[1705] = (int)v8;
    v10 = a1 + 1705;
    v11 = (void *)Resource_getModel2(Resource, v6, 1, 1, 1, 0, 0, 0, 0);
    v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    ModelWrapper_ctor(v12, v11, 1, 1, 1, 0, 0);
  }
  else
  {
    v13 = (void *)Resource_getModel2(Resource, v4, 2, 1, 0, 0, 0, 0, 0);
    v14 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v15 = sub_60421830(v14, v13, 2, 1, 0, 0, 0);
    j_ModelWrapper_setupModel((int)v15, (int)Resource, 0, 0);
    a1[1705] = (int)v14;
    v10 = a1 + 1705;
    v16 = (void *)Resource_getModel2(Resource, v5, 1, 1, 0, 0, 0, 0, 0);
    v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    ModelWrapper_ctor(v12, v16, 1, 1, 0, 0, 0);
  }
  ModelWrapper_setup(v12, (int)Resource, 0, 0);
  a1[1706] = (int)v12;
  a1[1707] = 0;
  sub_60421AD4(*v10);
  v17 = a1[1706];
  v18 = *v10;
  v19 = **(_DWORD **)(v17 + 20);
  v21 = a1[1712];
  v20 = a1 + 1712;
  TexAnim_play(v19, Resource, &dword_60C955A0[2 * v29 + 6]);
  FIELD_U32(v19, 20) = dword_60AF20E8[v21];
  FIELD_U32(v19, 28) |= 2u;
  FIELD_U32(v19, 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(v19 + 4), 0);
  if ( *v28 == 1 )
  {
    v22 = **(_DWORD **)(v17 + 28);
    ShuAnim_play((_DWORD *)v22, (int)Resource, (int)&dword_60C9557C);
    AnimationCtrl_setRepeat((ModelAnimation *)(v22 + 4), 0);
    FIELD_U32(v22, 24) = 0;
  }
  v23 = *v20;
  v24 = **(_DWORD **)(v18 + 20);
  TexAnim_play(v24, Resource, &dword_60C955A0[2 * v29 + 8]);
  FIELD_U32(v24, 20) = dword_60AF20E8[v23];
  FIELD_U32(v24, 28) |= 2u;
  FIELD_U32(v24, 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(v24 + 4), 0);
  if ( *v28 == 1 )
  {
    v25 = **(_DWORD **)(v18 + 28);
    ShuAnim_play((_DWORD *)v25, (int)Resource, (int)&dword_60C95584);
    AnimationCtrl_setRepeat((ModelAnimation *)(v25 + 4), 0);
    FIELD_U32(v25, 24) = 0;
    if ( *v28 == 1 )
    {
      if ( ((unsigned int)algn_60C95558 & ~(1614128388 << v26) & 1) == 0 )
      {
        if ( _cxa_guard_acquire((__guard *)algn_60C95558) )
        {
          dword_60C95568 = (int)&sead__SafeStringBase__vtable;
          dword_60C9556C = (int)"nokonokoBig";
          _cxa_guard_release((__guard *)algn_60C95558);
        }
      }
      v27 = **(_DWORD **)(*v10 + 44);
      sub_604470DC(v27, (int)Resource, (int)&dword_60C95568);
      AnimationCtrl_setRepeat((ModelAnimation *)(v27 + 4), 0);
      FIELD_U32(v27, 24) = 0;
    }
  }
}
