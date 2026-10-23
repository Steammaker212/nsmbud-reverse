/* light_block_ref
 * address: 0x605B7D58   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall light_block_ref(int a1)
{
  void *ResArchiveById; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r6
  int v7; // r0
  _DWORD *v8; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "light_block";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6180) = v4;
  v6 = (int)*FIELD_U32(v4, 0x8).animations;
  v7 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "light_block";
  SkeletalAnim_play(v6, v7, (const char **)&a2);
  v8 = **(_DWORD ***)(FIELD_U32(a1, 6180) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "light_block";
  ShuAnim_play(v8, (int)ResArchiveById, &a2);
  result = **(_DWORD **)(FIELD_U32(a1, 6180) + 28);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
