/* sub_602618E8
 * address: 0x602618E8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602618E8(int a1)
{
  void *v2; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int ResArchiveById; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  v2 = *(void **)(a1 + 6356);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "parachute";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 7068) = v4;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), a1 + 7084);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "para_drop";
  v6 = **(_DWORD **)(FIELD_U32(a1, 7068) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  SkeletalAnim_play(v6, ResArchiveById, (int)&a2);
  FIELD_U32(v6, 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
}
