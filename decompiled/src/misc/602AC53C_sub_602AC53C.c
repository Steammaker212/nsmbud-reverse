/* sub_602AC53C
 * address: 0x602AC53C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AC53C(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fire_snake_head";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "R_jump_st";
  sub_60421938(v4, (int)ResArchiveById, (int)&a2);
  v6 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fire_snake_head";
  sub_60446088(v6, (int)ResArchiveById, (int)&a2);
  v7 = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = (char *)&unk_60ABF3B9;
  TexAnim_play(v7, ResArchiveById, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 20) + 4), 0);
  v8 = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 20) + 24) = 0;
  fire_snake_ref(FIELD_U32(a1, 6800));
  fire_snake_ref(FIELD_U32(a1, 6804));
  fire_snake_ref(FIELD_U32(a1, 6808));
  return fire_snake_ref(FIELD_U32(a1, 6812));
}
