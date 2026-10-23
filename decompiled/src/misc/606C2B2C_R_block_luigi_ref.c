/* R_block_luigi_ref
 * address: 0x606C2B2C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall R_block_luigi_ref(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "R_block_luigi";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "R_block_luigi_model";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 1, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 7388) = v4;
  v6 = (int)*FIELD_U32(v4, 0x14);
  FIELD_U32(a1, 7392) = v6;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "R_block_luigi_model";
  TexAnim_play(v6, (int)v2, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 7392) + 4), 1);
  result = FIELD_U32(a1, 7392);
  FIELD_U32(result, 24) = 0;
  return result;
}
