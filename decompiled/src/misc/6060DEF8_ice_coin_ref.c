/* ice_coin_ref
 * address: 0x6060DEF8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ice_coin_ref(int a1)
{
  void *v2; // r9
  void *Model2; // r11
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int *animations; // r0
  int v7; // r5
  int v8; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v11)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v12; // [sp+20h] [bp-28h]

  v11 = &sead__SafeStringBase__vtable;
  v12 = "ice_coin";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v11);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ice_coin";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  animations = (int *)FIELD_U32(v4, 0x1C);
  v7 = *animations;
  FIELD_U32(a1, 6108) = *animations;
  v11 = &sead__SafeStringBase__vtable;
  v12 = "ice_coin";
  v8 = LoadResource(ResourceMgrRelated_instance, &v11);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ice_coin";
  sub_60446088(v7, v8, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6108) + 4), 1);
  result = FIELD_U32(a1, 6108);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
