/* cobSwitchA_ref
 * address: 0x601FC974   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobSwitchA_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r1
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobSwitchA";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  v6 = (int)*FIELD_U32(v4, 0x8).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobSwitchA";
  SkeletalAnim_play(v6, (int)ResArchiveById, (int)&identifier);
  sub_601FCB08(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  v7 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  FIELD_U32(v7, 24) = 0;
  if ( !FIELD_U8(dword_60CC6D78, 120) )
  {
    FIELD_U32(v7, 20) = FIELD_U32(v7, 8);
    FIELD_U32(v7, 28) |= 2u;
    FIELD_U32(v7, 24) = 1065353216;
    FIELD_U8(a1, 288) = 1;
  }
  AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 0);
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  FIELD_U32(a1, 212) = 1112014848;
  return 1;
}
