/* sandpillar_ref
 * address: 0x606262F4   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sandpillar_ref(int a1, unsigned int r1_0)
{
  int v3; // r0
  unsigned int v4; // r0
  void *v5; // r5
  void *Model2; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  void **animations; // r1
  ActiveColliderMgr *v10; // r6
  ActiveColliderMgr *v11; // r6
  int v12; // r0
  SolidOnTopColliderInfo a2; // [sp+18h] [bp-48h] BYREF
  _DWORD v15[12]; // [sp+30h] [bp-30h] BYREF

  v3 = dword_60CC6484;
  FIELD_F32(a1, 6112) = FIELD_F32(dword_60CC6484, 112) + -38.4;
  FIELD_F32(a1, 6116) = (float)(FIELD_F32(v3, 112) + FIELD_F32(v3, 104)) + 38.4;
  FIELD_U32(a1, 116) = 0;
  v4 = (r1_0 >> 2) & 0xC;
  FIELD_U32(a1, 6448) = *(_DWORD *)((char *)&unk_60AF2A94 + v4);
  FIELD_U32(a1, 6452) = *(_DWORD *)((char *)&unk_60AF2AA4 + v4);
  LODWORD(a2.field_0) = &sead__SafeStringBase__vtable;
  a2.field_4 = (int)"sandpillar";
  v5 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6128) = v5;
  LODWORD(a2.field_0) = &sead__SafeStringBase__vtable;
  a2.field_4 = (int)"sandpillar";
  Model2 = (void *)Resource_getModel2(v5, (sead__SafeString *)&a2, 0, 0, 2, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, Model2, 0, 0, 2, 0, 0);
  ModelWrapper_setup(v8, v5, 0, 0);
  FIELD_U32(a1, 6132) = v7;
  FIELD_U32(a1, 6136) = *FIELD_U32(v7, 0x18).animations;
  animations = FIELD_U32(v7, 0x18).animations;
  if ( FIELD_U32(v7, 0x18).count > 1u )
    ++animations;
  FIELD_U32(a1, 6140) = *animations;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 1065353216;
  ef_sandpillar_ref(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C11CE0, 0);
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6144), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C11D0C, 0);
  v11 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6144))
    && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 6144)) )
  {
    ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 6144));
  }
  v12 = FIELD_U32(a1, 6120);
  v15[0] = -1040187392;
  memset(&a2, 0, 16);
  v15[1] = v12;
  v15[2] = 1107296256;
  v15[3] = v12;
  a2.points = (Vec2 *)v15;
  a2.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6832), (StageActor *)a1, &a2);
  FIELD_U32(a1, 7004) = 0;
  FIELD_U32(a1, 7008) = 0;
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6832), 4);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1124073472;
  FIELD_U32(a1, 500) = 1119879168;
  FIELD_U32(a1, 504) = 1132462080;
  FIELD_U32(a1, 508) = 1119879168;
  FIELD_U32(a1, 512) = 1132462080;
  FIELD_U32(a1, 6100) = 1140850688;
  FIELD_U32(a1, 6104) = 1140850688;
  return 6104;
}
