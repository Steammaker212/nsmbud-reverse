/* sub_6056AF34
 * address: 0x6056AF34   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056AF34(int a1)
{
  char *v2; // r6
  void *v3; // r9
  void *Model2; // r10
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  _DWORD *v7; // r5
  int v8; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v11)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v12; // [sp+20h] [bp-28h]

  if ( FIELD_U32(dword_60C99DD4, 304) == 1 )
  {
    v11 = &sead__SafeStringBase__vtable;
    v2 = "R_block_help";
    v12 = "R_block_help";
    a2.vtable = &sead__SafeStringBase__vtable;
    v3 = (void *)LoadResource(ResourceMgrRelated_instance, &v11);
    a2.cstr = "R_block_help";
  }
  else
  {
    v11 = &sead__SafeStringBase__vtable;
    v2 = "block_help";
    v12 = "block_help";
    a2.vtable = &sead__SafeStringBase__vtable;
    v3 = (void *)LoadResource(ResourceMgrRelated_instance, &v11);
    a2.cstr = "block_help";
  }
  Model2 = (void *)Resource_getModel2(v3, &a2, 1, 0, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 7388) = v5;
  v7 = *FIELD_U32(v5, 0x1C);
  FIELD_U32(a1, 7392) = v7;
  v11 = &sead__SafeStringBase__vtable;
  v12 = v2;
  v8 = LoadResource(ResourceMgrRelated_instance, &v11);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v2;
  ShuAnim_play(v7, v8, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 7392) + 4), 1);
  result = FIELD_U32(a1, 7392);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
