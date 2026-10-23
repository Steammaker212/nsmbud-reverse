/* block_fly_ref
 * address: 0x606BE84C   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall block_fly_ref(int a1)
{
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  ActiveColliderMgr *v6; // r6
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF
  _DWORD v9[8]; // [sp+20h] [bp-20h] BYREF

  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "block_fly";
  a2.vtable = &sead__SafeStringBase__vtable;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v9);
  a2.cstr = "block_fly";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  FIELD_U32(a1, 6152) = v4;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), a1 + 144);
  sub_600210C8(a1 + 6816, a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C1B918, 0);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B088C8, &stru_60B088D4, &stru_60B088E0);
  FIELD_U32(a1, 3192) |= 0x40000000u;
  ShapedCollider_init((ShapedCollider *)(a1 + 6160), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CBA7F8);
  FIELD_U32(a1, 6472) = sub_605C9460;
  FIELD_U32(a1, 6476) = sub_605C95B8;
  FIELD_U32(a1, 6480) = sub_605C9710;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6160));
  StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0ECC._._);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1);
  return 1;
}
