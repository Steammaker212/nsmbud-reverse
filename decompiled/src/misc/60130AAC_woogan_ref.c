/* woogan_ref
 * address: 0x60130AAC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall woogan_ref(int a1)
{
  void *ResArchiveById; // r10
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "woogan";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  sub_60421AE4(v4, &a2, 1);
  v6 = **(_DWORD **)(FIELD_U32(a1, 6104) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  TexAnim_play(v6, ResArchiveById, &a2);
  v7 = **(_DWORD **)(FIELD_U32(a1, 6104) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "woogan";
  return sub_60446088(v7, (int)ResArchiveById, (int)&a2);
}
