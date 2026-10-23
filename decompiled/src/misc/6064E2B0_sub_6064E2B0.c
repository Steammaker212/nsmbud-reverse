/* sub_6064E2B0
 * address: 0x6064E2B0   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064E2B0(int *a1)
{
  void *v2; // r5
  void *Model2; // r8
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r1
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "remo_lift";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1813] = (int)v2;
  a1 += 1813;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "remo_lift";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1] = (int)v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "change_mark";
  sub_6040F4B8((int)v4, (int)&a2, 0, 0.0, 0.0);
  v6 = **(_DWORD **)(a1[1] + 20);
  a1[2] = v6;
  v7 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "remo_lift";
  TexAnim_play(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[2] + 4), 0);
  *(_DWORD *)(a1[2] + 24) = 0;
  result = a1[2];
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
