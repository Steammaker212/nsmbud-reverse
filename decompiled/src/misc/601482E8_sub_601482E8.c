/* sub_601482E8
 * address: 0x601482E8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601482E8(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  int v9; // r4
  int v10; // r0
  char *v11; // r1
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ball_ice";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ball_ice";
  v6 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, v6, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v8, (int)ResArchiveById, 0, 0);
  v9 = a1 + 6300;
  FIELD_U32(a1, 6304) = v7;
  v10 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v11 = "throw_ball";
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v11 = "throw_right_ball";
  }
  a2.cstr = v11;
  SkeletalAnim_play(v10, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v9 + 12) + 4), 0);
  result = **(_DWORD **)(*(_DWORD *)v9 + 12);
  FIELD_U32(result, 24) = 0;
  return result;
}
