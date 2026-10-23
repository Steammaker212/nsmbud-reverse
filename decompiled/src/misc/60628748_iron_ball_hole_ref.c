/* iron_ball_hole_ref
 * address: 0x60628748   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall iron_ball_hole_ref(int a1)
{
  void *ResArchiveById; // r8
  float v3; // s0
  const char *v4; // r0
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  ShapedColliderInfo a2; // [sp+18h] [bp-40h] BYREF

  FIELD_U32(a1, 80) = FIELD_U32(a1, 20) & 0xF;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v3 = FIELD_F32(a1, 108);
  if ( FIELD_U32(a1, 80) )
  {
    FIELD_F32(a1, 108) = v3 + 64.0;
    LODWORD(a2.distToCenter.x) = &sead__SafeStringBase__vtable;
    v4 = "iron_ball_hole_L";
  }
  else
  {
    FIELD_F32(a1, 108) = v3 + -48.0;
    LODWORD(a2.distToCenter.x) = &sead__SafeStringBase__vtable;
    v4 = "iron_ball_hole_R";
  }
  LODWORD(a2.distToCenter.y) = v4;
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&a2, 0, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 644) = v6;
  if ( Actor__getProfileId((Actor *)a1) == 192 )
    FIELD_U32(a1, 116) = -985546752;
  sub_60628928(a1);
  memset(&a2, 0, 16);
  a2.topLeft.x = -64.0;
  a2.topLeft.y = 16.0;
  a2.bottomRight.x = 64.0;
  a2.bottomRight.y = -16.0;
  a2.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 648), (StageActor *)a1, &a2);
  ColliderBase_setType((ColliderBase *)(a1 + 648), 33);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 648));
  return 1;
}
