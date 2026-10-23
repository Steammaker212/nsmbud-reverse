/* sub_60468324
 * address: 0x60468324   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60468324(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v11)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v12; // [sp+20h] [bp-28h]

  v11 = &sead__SafeStringBase__vtable;
  v12 = "I_kinoko";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v11);
  a2.cstr = "I_kinoko";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6160) = v4;
  v6 = (int)*FIELD_U32(v4, 0x14);
  FIELD_U32(a1, 6164) = v6;
  v11 = &sead__SafeStringBase__vtable;
  v12 = "I_kinoko";
  v7 = LoadResource(ResourceMgrRelated_instance, &v11);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "I_kinoko_switch";
  TexAnim_play(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6164) + 4), 0);
  v8 = FIELD_U32(a1, 6164);
  FIELD_U32(v8, 20) = 0x40000000;
  FIELD_U32(v8, 28) |= 2u;
  result = FIELD_U32(a1, 6164);
  FIELD_U32(result, 24) = 0;
  return result;
}
