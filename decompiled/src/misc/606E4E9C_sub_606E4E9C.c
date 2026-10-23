/* sub_606E4E9C
 * address: 0x606E4E9C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E4E9C(int a1)
{
  void *ResArchiveById; // r5
  bool v3; // zf
  char *v4; // r2
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 132))(a1) == 0;
  v4 = "tarzanchain";
  a2.vtable = &sead__SafeStringBase__vtable;
  if ( v3 )
    v4 = "tarzantsuta";
  a2.cstr = v4;
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 732) = v6;
  v8 = (int)*FIELD_U32(v6, 0xC);
  v9 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v8, v9, (const char **)&a2);
  sub_606E5E10(a1);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 732) + 12) + 4), 1);
  v10 = **(_DWORD **)(FIELD_U32(a1, 732) + 12);
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  result = **(_DWORD **)(FIELD_U32(a1, 732) + 12);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
