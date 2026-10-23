/* sub_60663D24
 * address: 0x60663D24   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60663D24(int a1)
{
  _DWORD *v2; // r9
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  ActiveColliderMgr *v7; // r6
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  _DWORD v10[10]; // [sp+20h] [bp-28h] BYREF

  FIELD_U32(a1, 7224) = 0;
  v2 = (_DWORD *)(a1 + 7224);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "bolt";
  a2.vtable = &sead__SafeStringBase__vtable;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v10);
  a2.cstr = "bolt";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, Resource, 0, 0);
  FIELD_U32(a1, 7320) = v5;
  lift_spin_kinoko_ref(a1);
  FIELD_U32(a1, 7336) = FIELD_U32(a1, 20) >> 28;
  ((void (__fastcall *)(int))loc_60663F70)(a1);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 7264) = 0;
  FIELD_U8(a1, 7316) = 0;
  FIELD_U8(a1, 7317) = 1;
  FIELD_U8(a1, 7318) = 1;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1149763584;
  FIELD_U32(a1, 504) = 1149239296;
  FIELD_U32(a1, 508) = 1140850688;
  FIELD_U32(a1, 512) = 1140850688;
  FIELD_U32(a1, 516) = 1135083520;
  FIELD_U32(a1, 520) = 1135083520;
  FIELD_U32(a1, 524) = 1140850688;
  FIELD_U32(a1, 528) = 1140850688;
  if ( !*v2 )
  {
    LOBYTE(v10[0]) = 3;
    ActiveCollider_init2((ActiveCollider *)(a1 + 7340), (StateActor *)a1, &stru_60B078F4, (unsigned __int8 *)v10, 0);
    FIELD_U32(a1, 7452) = a1 + 7644;
    FIELD_U32(a1, 7456) = FIELD_U32(a1, 7324);
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7340))
      && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 7340)) )
    {
      ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 7340));
    }
  }
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  sub_60664220(a1);
  sub_606643DC(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB6AF8);
  return 1;
}
