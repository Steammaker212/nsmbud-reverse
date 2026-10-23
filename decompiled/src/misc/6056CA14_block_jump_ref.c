/* block_jump_ref
 * address: 0x6056CA14   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall block_jump_ref(_DWORD *a1)
{
  void *v2; // r5
  unsigned int v3; // r0
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r5
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  int result; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-34h] BYREF
  int (**v13)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v14; // [sp+28h] [bp-28h]

  v13 = &sead__SafeStringBase__vtable;
  v14 = "block_jump";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v13);
  v3 = a1[5];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = off_60C02A78[(v3 >> 8) & 1];
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v6, v2, 0, 0);
  a1[1847] = v5;
  v7 = (int)*FIELD_U32(v5, 0x18).animations;
  a1[1848] = v7;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "block_jump";
  v8 = LoadResource(ResourceMgrRelated_instance, &v13);
  v9 = a1[5];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = off_60C02A78[(v9 >> 8) & 1];
  sub_60446088(v7, v8, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1848] + 4), 1);
  v10 = a1[1848];
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  result = a1[1848];
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
