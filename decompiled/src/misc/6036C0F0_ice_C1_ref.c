/* ice_C1_ref
 * address: 0x6036C0F0   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall ice_C1_ref(int a1)
{
  char v1; // r12
  int v3; // r5
  float v4; // s0
  int v5; // r0
  int v6; // r1
  int v7; // r2
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v10; // r7
  ModelWrapper *v11; // r0
  int v12; // r0
  float v13; // s2
  float v14; // s0
  int v15; // s20
  float v16; // s22
  float v17; // s16
  float v18; // s18
  ActiveColliderMgr *v19; // r6
  float v20; // s0
  ActiveColliderInfo a2; // [sp+18h] [bp-80h] BYREF
  CollisionMgr_Sensor adjacentSensor; // [sp+44h] [bp-54h] BYREF

  v3 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C95E08 & ~(1614201112 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C95E08) )
  {
    dword_60C95E04 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C95E08);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C95E04) )
  {
    v4 = sub_6036AA34(v3);
    v5 = FIELD_U32(v3, 124);
    FIELD_F32(a1, 120) = v4;
    FIELD_U32(a1, 124) = v5;
    FIELD_U32(a1, 128) = 0;
    v6 = FIELD_U32(v3, 136);
    v7 = FIELD_U32(v3, 140);
    FIELD_U32(a1, 132) = FIELD_U32(v3, 132);
    FIELD_U32(a1, 136) = v6;
    FIELD_U32(a1, 140) = v7;
    FIELD_U32(a1, 80) = v4 < 0.0;
    FIELD_U32(a1, 100) = -1103101952;
    FIELD_U8(a1, 84) = FIELD_U8(v3, 84);
    FIELD_U32(a1, 7312) = FIELD_U32(v3, 6308);
    if ( (FIELD_U8(v3, 21) & 1) != 0 )
      FIELD_U8(a1, 7311) = 1;
    ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    LODWORD(a2.distToCenter.x) = &sead__SafeStringBase__vtable;
    LODWORD(a2.distToCenter.y) = "ice_C1";
    Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&a2, 0, 0, 1, 0, 0, 0, 0);
    v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v11 = ModelWrapper_ctor(v10, Model2, 0, 0, 1, 0, 0);
    ModelWrapper_setup(v11, (int)ResArchiveById, 0, 0);
    FIELD_U32(a1, 6064) = v10;
    v12 = (int)*FIELD_U32(v10, 0x1C);
    LODWORD(a2.distToCenter.x) = &sead__SafeStringBase__vtable;
    LODWORD(a2.distToCenter.y) = "ice_C1";
    sub_60446088(v12, (int)ResArchiveById, (int)&a2);
    v13 = *(float *)&dword_60C95EC0;
    v14 = *(float *)&dword_60C95EBC;
    FIELD_U32(a1, 144) = dword_60C95EBC;
    FIELD_F32(a1, 148) = v13;
    *(float *)&v15 = 24.0 * v13;
    v16 = 36.0 * v14;
    FIELD_U32(a1, 152) = dword_60C95EC4;
    FIELD_U32(a1, 572) = 0;
    v17 = (float)(24.0 * v13) * 0.5;
    v18 = (float)(36.0 * v14) * 0.5;
    FIELD_F32(a1, 576) = v17;
    FIELD_U32(a1, 580) = 0;
    a2.distToCenter.x = -10.0;
    a2.distToCenter.y = 10.0;
    a2.distToEdge.x = 24.0 * v13;
    adjacentSensor.a = v17 + -4.0;
    adjacentSensor.b = v17 + 4.0;
    adjacentSensor.c = v18;
    CollisionMgr_init(
      (CollisionMgr *)(a1 + 648),
      (StateActor *)a1,
      &stru_60B00370,
      (CollisionMgr_Sensor *)&a2,
      &adjacentSensor);
    if ( FIELD_U8(a1, 84) <= 3u )
    {
      FIELD_U32(a1, 3200) |= 0x10u;
      FIELD_U32(a1, 3192) |= 0x10u;
      FIELD_U32(a1, 3176) |= 0x10u;
      FIELD_U32(a1, 3184) |= 0x10u;
    }
    memset(&a2, 0, 12);
    a2.distToEdge.y = FIELD_F32(a1, 576);
    *(float *)&a2.field_10 = v16 * -0.5;
    a2.field_14 = v15;
    *(float *)&a2.category = v18;
    a2.field_1C = 0;
    a2.mask = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 6072), (StageActor *)a1, (ShapedColliderInfo *)&a2);
    FIELD_U32(a1, 6408) = a1 + 7320;
    FIELD_U32(a1, 6384) = sub_6036C5DC;
    FIELD_U32(a1, 6388) = sub_6036C67C;
    FIELD_U32(a1, 6392) = sub_6036C860;
    ColliderBase_setType((ColliderBase *)(a1 + 6072), 31);
    FIELD_U32(a1, 6296) = 1;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6072));
    a2.distToCenter.x = 0.0;
    a2.distToCenter.y = FIELD_F32(a1, 576);
    a2.distToEdge.x = v18 + 2.0;
    a2.distToEdge.y = v17 + 2.0;
    a2.field_10 = 0;
    a2.field_14 = 3;
    a2.category = 9;
    a2.field_1C = 10;
    a2.mask = 1544;
    a2.field_24 = 0;
    a2.callback = nullsub_3429;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &a2, 0);
    v19 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v19, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v19, (ActiveCollider *)(a1 + 188));
    }
    ((void (__fastcall *)(int, int, int *))loc_602F2F3C)(a1 + 6728, 2, &dword_60B3B98C);
    v20 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    a2.distToCenter.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    a2.distToCenter.y = v20;
    sub_602F322C(a1 + 6728, (int *)&a2, 0, 0);
    sub_602F31A0(a1 + 6728, (int *)&a2, 0);
    FIELD_U32(a1, 7304) = 390;
    FIELD_U8(a1, 7308) = 1;
    return 1;
  }
  else
  {
    FIELD_U8(a1, 19) = 1;
    return 2;
  }
}
