/* sub_60288BA4
 * address: 0x60288BA4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60288BA4(int *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "crasher";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1576] = (int)v2;
  a1 += 1576;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "crasher";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  *(a1 - 1) = (int)v4;
  v6 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "walk";
  sub_60421938(v4, v6, (int)&a2);
  v7 = **(_DWORD ***)(*(a1 - 1) + 28);
  a1[1] = (int)v7;
  v8 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "damage";
  ShuAnim_play(v7, v8, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1] + 4), 0);
  v9 = a1[1];
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  result = a1[1];
  FIELD_U32(result, 24) = 0;
  return result;
}
