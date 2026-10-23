/* ice_A1_ref
 * address: 0x606D5E18   size: 1052   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall ice_A1_ref(int a1)
{
  unsigned int v2; // r0
  float v3; // s8
  float v4; // s6
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  int v9; // r0
  void *v10; // r0
  float v11; // s0
  float *v12; // r9
  float v13; // s0
  float v14; // s0
  ActiveColliderMgr *v15; // r6
  float v16; // s0
  float v17; // s4
  float v18; // r0
  float v19; // s0
  float *v21; // [sp+18h] [bp-80h]
  float *v22; // [sp+1Ch] [bp-7Ch]
  ShapedColliderInfo a2; // [sp+20h] [bp-78h] BYREF
  CollisionMgr_Sensor adjacentSensor; // [sp+48h] [bp-50h] BYREF
  CollisionMgr_Sensor a4; // [sp+54h] [bp-44h] BYREF

  if ( (FIELD_U8(a1, 21) & 1) != 0 )
    FIELD_U8(a1, 6848) = 1;
  v2 = FIELD_U32(a1, 24);
  v3 = (float)((float)(v2 & 3) * 8.0) + 16.0;
  v4 = (float)((float)((v2 >> 8) & 3) * 8.0) + 16.0;
  FIELD_F32(a1, 6816) = v3;
  v21 = (float *)(a1 + 6820);
  FIELD_F32(a1, 6820) = v4;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_F32(a1, 144) = v3 * 0.05;
  FIELD_F32(a1, 148) = v4 * 0.05;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(a2.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(a2.distToCenter.y) = "ice_A1";
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&a2, 0, 0, 1, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v8, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6152) = v7;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v7, 0x0) + 68))(FIELD_U32(v7, 0x0), a1 + 144);
  v9 = **(_DWORD **)(FIELD_U32(a1, 6152) + 28);
  LODWORD(a2.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(a2.distToCenter.y) = "ice_A1";
  sub_60446088(v9, (int)ResArchiveById, &a2);
  if ( FIELD_U8(a1, 6848) )
  {
    v10 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 1u);
    LODWORD(a2.distToCenter.x) = &sead__SafeStringBase__vtable;
    LODWORD(a2.distToCenter.y) = "obj_coin";
    FIELD_U32(a1, 6156) = Resource_getModel2(v10, (sead__SafeString *)&a2, 0, 0, 0, 0, 0, 0, 0);
    v11 = *v21;
    FIELD_U32(a1, 6824) = 0;
    v12 = (float *)(a1 + 6820);
    FIELD_F32(a1, 6828) = v11 * 0.5;
    FIELD_U32(a1, 6832) = 0;
  }
  else
  {
    v11 = *v21;
    v12 = (float *)(a1 + 6820);
  }
  FIELD_U32(a1, 572) = 0;
  FIELD_F32(a1, 576) = v11 * 0.5;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C1E2E4, 0);
  v13 = *v12;
  FIELD_U32(a1, 304) = 0;
  v14 = v13 * 0.5;
  FIELD_F32(a1, 308) = v14;
  v22 = (float *)(a1 + 6816);
  FIELD_F32(a1, 312) = FIELD_F32(a1, 6816) * 0.5;
  FIELD_F32(a1, 316) = v14 + 1.0;
  v15 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v15, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v15, (ActiveCollider *)(a1 + 188));
  }
  v16 = *v22 * 0.5;
  a2.distToCenter.x = -(float)(v16 + -4.0);
  a2.distToCenter.y = v16 + -4.0;
  a4.a = a2.distToCenter.x;
  a2.field_8 = 0.0;
  a4.b = v16 + -4.0;
  v17 = *v12;
  adjacentSensor.a = 4.0;
  adjacentSensor.b = v17 + -4.0;
  a4.c = v17 + 1.0;
  adjacentSensor.c = v16 + 1.0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, (CollisionMgr_Sensor *)&a2, &a4, &adjacentSensor);
  memset(&a2, 0, 16);
  v18 = *v12;
  v19 = *v22 * 0.5;
  a2.topLeft.x = *v22 * -0.5;
  a2.topLeft.y = v18;
  a2.bottomRight.x = v19;
  a2.bottomRight.y = 0.0;
  a2.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6160), (StageActor *)a1, &a2);
  ColliderBase_setType((ColliderBase *)(a1 + 6160), 0x20);
  FIELD_U32(a1, 6472) = sub_606D6268;
  FIELD_U32(a1, 6476) = sub_606D6408;
  FIELD_U32(a1, 6480) = sub_606D66F4;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6160));
  ((void (__fastcall *)(int, _DWORD, int *))loc_602F2F3C)(a1 + 6852, 0, &dword_60B3B98C);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBB6CC);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1);
  return 1;
}
