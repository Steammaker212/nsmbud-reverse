/* lift_zen_kaihei_ref
 * address: 0x6066D434   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall lift_zen_kaihei_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  char *v6; // r4
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_zen_kaihei";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6196) = v4;
  v6 = (char *)*FIELD_U32(v4, 0x18).animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_zen_kaihei";
  ShuAnim_play(v6, (int)ResArchiveById, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 0);
}
