/* throw_5_ref
 * address: 0x60344BDC   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall throw_5_ref(int *a1)
{
  void *v2; // r5
  void *Model2; // r9
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "choropoo";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1576] = (int)v2;
  a1 += 1576;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "choropoo";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  *(a1 - 1) = (int)v4;
  v6 = *a1;
  v7 = (int)*FIELD_U32(v4, 0x8).animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "throw_5";
  SkeletalAnim_play(v7, v6, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(*(a1 - 1) + 12) + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(a1 - 1) + 12) + 4), 1);
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(a1 - 1) + 12) + 4));
}
