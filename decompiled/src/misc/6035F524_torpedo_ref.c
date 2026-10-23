/* torpedo_ref
 * address: 0x6035F524   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall torpedo_ref(int *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r1
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "torpedo";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1575] = (int)v2;
  a1 += 1575;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "torpedo";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[1] = (int)v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ready";
  sub_6040F4B8(v4, &a2, 1);
  v6 = **(_DWORD **)(a1[1] + 20);
  a1[2] = v6;
  v7 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "torpedo";
  TexAnim_play(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[2] + 4), 0);
  *(_DWORD *)(a1[2] + 24) = 0;
  result = a1[2];
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
