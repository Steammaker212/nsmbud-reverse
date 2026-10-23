/* sub_605D39CC
 * address: 0x605D39CC   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D39CC(int a1)
{
  void *Resource; // r6
  void *Model2; // r8
  int v4; // r7
  ModelWrapper *v5; // r0
  ActiveColliderMgr *v6; // r6
  int v7; // s2

  FIELD_U8(a1, 537) = 0;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CB1360);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&unk_60CB1368, 1, 0, 0, 0, 0, 0, 0);
  v4 = operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor((ModelWrapper *)v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  FIELD_U32(a1, 648) = v4;
  SkeletalAnim_play(**(_DWORD **)(v4 + 12), (int)Resource, (const char **)&dword_60CB1394);
  *(_DWORD *)(**(_DWORD **)(a1 + 648) + 36) = 16;
  FIELD_U32(a1, 144) = 1008981770;
  FIELD_U32(a1, 148) = 1008981770;
  FIELD_U32(a1, 152) = 1065353216;
  sub_605D3BA0(a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U8(a1, 533) = 0;
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1115684864;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C0B10C, a1 + 884);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  FIELD_F32(a1, 116) = (float)((float)((FIELD_U32(a1, 20) >> 8) & 0xF) * 16.0) + 6016.0;
  StateMgr__changeState((StateMgr *)(a1 + 940), (StateBase *)&dword_60CB1228);
  FIELD_F64(a1, 892) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 888))(a1 + 888);
  FIELD_U32(a1, 900) = v7;
  balloon_awachibiyoshi_ref_2(a1);
  return 1;
}
