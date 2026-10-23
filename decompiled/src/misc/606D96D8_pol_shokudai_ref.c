/* pol_shokudai_ref
 * address: 0x606D96D8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall pol_shokudai_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "pol_shokudai";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  sub_606D9818(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6104), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CBB820);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBB844);
  return 1;
}
