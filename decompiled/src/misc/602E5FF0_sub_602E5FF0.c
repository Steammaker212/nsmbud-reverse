/* sub_602E5FF0
 * address: 0x602E5FF0   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602E5FF0(int a1)
{
  void *v2; // r0
  void *v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r0
  void *v10; // r6
  ModelWrapper *v11; // r7
  ModelWrapper *v12; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  FIELD_U8(a1, 8) = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ibaramushi";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = v2;
  a2.cstr = "ibaramushi";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v3, 0, 0);
  *(_DWORD *)a1 = v5;
  animations = (unsigned int)v5[1].texAnims.animations;
  v8 = (int *)FIELD_U32(v5, 0xC);
  if ( FIELD_U32(v5, 0x8) > animations )
    v8 += animations;
  v9 = *v8;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait_A_LmRm";
  SkeletalAnim_play(v9, (int)v3, (int)&a2);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)a1 + 20), v3, &dword_60C9234C);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)a1 + 20) + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)a1 + 20) + 4), 0);
  sub_60446088(**(_DWORD **)(*(_DWORD *)a1 + 28), (int)v3, (int)&dword_60C9234C);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)a1 + 28) + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)a1 + 28) + 4), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ibaramushi_orange";
  v10 = (void *)Resource_getModel2(v3, &a2, 0, 1, 1, 0, 0, 0, 0);
  v11 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v12 = sub_60421830(v11, v10, 0, 1, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v12, (int)v3, 0, 0);
  FIELD_U32(a1, 4) = v11;
  TexAnim_play(*FIELD_U32(v11, 0x14), v3, &dword_60C9236C);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 4) + 20) + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 4) + 20) + 4), 0);
  sub_60446088(**(_DWORD **)(FIELD_U32(a1, 4) + 28), (int)v3, (int)&dword_60C9236C);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 4) + 28) + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 4) + 28) + 4), 0);
}
