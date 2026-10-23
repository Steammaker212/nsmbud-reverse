/* sub_60467880
 * address: 0x60467880   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60467880(int a1)
{
  void *v2; // r9
  void *Model2; // r5
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int *animations; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v12)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v13; // [sp+20h] [bp-28h]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "I_kinoko";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v12);
  a2.cstr = "I_kinoko";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6160) = v4;
  animations = (int *)FIELD_U32(v4, 0x14);
  v7 = *animations;
  FIELD_U32(a1, 6164) = *animations;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "I_kinoko";
  v8 = LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "I_kinoko_switch";
  TexAnim_play(v7, v8, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6164) + 4), 0);
  v9 = FIELD_U32(a1, 6164);
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  result = FIELD_U32(a1, 6164);
  FIELD_U32(result, 24) = 0;
  return result;
}
