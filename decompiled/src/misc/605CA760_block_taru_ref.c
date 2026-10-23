/* block_taru_ref
 * address: 0x605CA760   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall block_taru_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  ActiveColliderMgr *v7; // r6
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_taru";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6152) = v4;
  v6 = dword_60CB0E9C;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = v6;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1094713344;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1140850688;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&qword_60CB0DB8, a1 + 6816);
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6820), (StageActor *)a1, (ActiveColliderInfo *)&dword_60CB0EA0, 0);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B057A4, &stru_60B057B0, &stru_60B057BC);
  ShapedCollider_init((ShapedCollider *)(a1 + 6160), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB0D90);
  FIELD_U32(a1, 6472) = sub_605CA9B8;
  FIELD_U32(a1, 6476) = sub_605CAB0C;
  FIELD_U32(a1, 6480) = sub_605CAB54;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6160));
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB0D24);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1);
  return 1;
}
