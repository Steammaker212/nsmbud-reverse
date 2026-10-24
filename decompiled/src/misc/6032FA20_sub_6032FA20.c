/* sub_6032FA20
 * address: 0x6032FA20   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032FA20(int a1)
{
  void *ResArchiveById; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r5
  int v9; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "huhu";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  animations = (unsigned int)FIELD_U32(v4 + (1) * 48, 0x14);
  v7 = (int *)FIELD_U32(v4, 0xC);
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v8 = *v7;
  v9 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  return SkeletalAnim_play(v8, v9, (int)&a2);
}
