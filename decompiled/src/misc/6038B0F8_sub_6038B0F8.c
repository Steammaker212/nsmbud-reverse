/* sub_6038B0F8
 * address: 0x6038B0F8   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038B0F8(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r1
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "torpedo";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6300) = v2;
  a1 += 6300;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "torpedo";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 4) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ready";
  sub_6040F4B8(v4, &a2, 1);
  v6 = **(_DWORD **)(FIELD_U32(a1, 4) + 20);
  FIELD_U32(a1, 8) = v6;
  v7 = *(_DWORD *)a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "torpedo";
  TexAnim_play(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 8) + 4), 0);
  *(_DWORD *)(FIELD_U32(a1, 8) + 24) = 0;
  v8 = FIELD_U32(a1, 8);
  FIELD_U32(v8, 20) = 1065353216;
  FIELD_U32(v8, 28) |= 2u;
  FIELD_U8(a1, 1986) = 0;
  v9 = **(_DWORD ***)(FIELD_U32(a1, 4) + 28);
  FIELD_U32(a1, 12) = v9;
  v10 = *(_DWORD *)a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "switching";
  ShuAnim_play(v9, v10, (int)&a2);
  *(_DWORD *)(FIELD_U32(a1, 12) + 24) = 0;
  result = FIELD_U32(a1, 12);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
