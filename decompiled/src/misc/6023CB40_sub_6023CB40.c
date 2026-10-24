/* sub_6023CB40
 * address: 0x6023CB40   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023CB40(int a1)
{
  void *v2; // r5
  int *v3; // r4
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r1
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  _DWORD *v19; // r0
  int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  _DWORD *v23; // r5
  int v24; // r0
  _DWORD *v25; // r0
  _DWORD v27[2]; // [sp+1Ch] [bp-34h] BYREF
  sead__SafeString a2; // [sp+24h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bakubaku";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6612) = v2;
  v3 = (int *)(a1 + 6612);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bakubaku";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v2, 0, 0);
  *(v3 - 2) = (int)v5;
  animations = (unsigned int)FIELD_U32(v5 + (1) * 48, 0x14);
  v8 = (int *)FIELD_U32(v5, 0xC);
  v9 = *v3;
  if ( FIELD_U32(v5, 0x8) > animations )
    v8 += animations;
  v10 = *v8;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "swim";
  SkeletalAnim_play(v10, v9, (int)&a2);
  v11 = (_DWORD *)*(v3 - 2);
  v12 = v11[3];
  v13 = v11[2];
  v14 = v11[17];
  if ( v13 > v14 )
    v12 += 4 * v14;
  *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
  v15 = (_DWORD *)*(v3 - 2);
  v16 = v15[3];
  v17 = v15[2];
  v18 = v15[17];
  if ( v17 > v18 )
    v16 += 4 * v18;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v16 + 4), 1);
  v19 = (_DWORD *)*(v3 - 2);
  v20 = v19[3];
  v21 = v19[2];
  v22 = v19[17];
  if ( v21 > v22 )
    v20 += 4 * v22;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v20 + 4));
  v23 = **(_DWORD ***)(*(v3 - 2) + 28);
  *(v3 - 1) = (int)v23;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bakubaku";
  v24 = LoadResource(ResourceMgrRelated_instance, &a2);
  v27[0] = &sead__SafeStringBase__vtable;
  v27[1] = "damage";
  ShuAnim_play(v23, v24, (int)v27);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(v3 - 1) + 4), 0);
  v25 = (_DWORD *)*(v3 - 1);
  v25[5] = v25[2];
  v25[7] |= 2u;
  *(_DWORD *)(*(v3 - 1) + 24) = 1065353216;
  v3[1366] = 0;
  return 5464;
}
