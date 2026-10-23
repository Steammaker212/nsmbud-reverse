/* sub_60302F60
 * address: 0x60302F60   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_60302F60(_DWORD *a1)
{
  void *v2; // r0
  int v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r0
  ModelAnimation *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jugem";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = (int)v2;
  a2.cstr = "jugem";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  a1[1738] = v5;
  a1 += 1738;
  v7 = (int)*FIELD_U32(v5, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v7, v3, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(*a1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4), 1);
  result = sub_6041838C((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4));
  a1[12] = 0;
  return result;
}
