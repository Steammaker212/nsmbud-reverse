/* sub_6064B2FC
 * address: 0x6064B2FC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064B2FC(int *a1, char **r1_0)
{
  char *v4; // r1
  void *v5; // r6
  char *v6; // r0
  void *Model2; // r9
  ModelWrapper *v8; // r5
  ModelWrapper *v9; // r0
  char *v10; // r0
  int v11; // r0
  char *v12; // r2
  int v13; // r1
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  v4 = *r1_0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v4;
  v5 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1813] = (int)v5;
  a1 += 1813;
  v6 = r1_0[1];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v6;
  Model2 = (void *)Resource_getModel2(v5, &a2, 1, 1, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v9, v5, 0, 0);
  a1[2] = (int)v8;
  v10 = r1_0[2];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v10;
  sub_6040F4B8((int)v8, (int)&a2, 0, 1.0, 0.0);
  v11 = **(_DWORD **)(a1[2] + 20);
  a1[5] = v11;
  v12 = r1_0[1];
  v13 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v12;
  TexAnim_play(v11, v13, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[5] + 4), 0);
  *(_DWORD *)(a1[5] + 24) = 0;
  result = a1[5];
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
