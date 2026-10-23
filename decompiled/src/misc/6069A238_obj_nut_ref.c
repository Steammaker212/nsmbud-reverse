/* obj_nut_ref
 * address: 0x6069A238   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall obj_nut_ref(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float v9; // s8
  float v10; // s0
  ActiveColliderMgr *v11; // r6
  float v12; // s0
  int v13; // r1
  int v14; // r2
  int v15; // r1
  int v16; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_nut";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6100) = v2;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_nut";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  v6 = (float)((FIELD_U32(a1, 20) & 7u) + 4) * 16.0;
  v7 = (float)(((FIELD_U32(a1, 20) >> 4) & 1u) + 1) * 16.0;
  FIELD_F32(a1, 6120) = v6;
  FIELD_F32(a1, 6124) = v7;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v8 = FIELD_F32(a1, 108) + (float)(v6 * 0.5);
  FIELD_F32(a1, 108) = v8;
  v9 = FIELD_F32(a1, 112) - (float)(v7 * 0.5);
  FIELD_F32(a1, 112) = v9;
  FIELD_U32(a1, 116) = 0;
  FIELD_F32(a1, 6132) = v8;
  FIELD_F32(a1, 6136) = v9;
  FIELD_U32(a1, 6140) = 0;
  FIELD_F32(a1, 492) = v6 * 0.5;
  FIELD_F32(a1, 496) = v6 * -0.5;
  FIELD_F32(a1, 500) = v6;
  FIELD_F32(a1, 504) = v7;
  FIELD_F32(a1, 508) = v6;
  FIELD_F32(a1, 512) = v7;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 520) = 0;
  v10 = v6 + 160.0;
  FIELD_F32(a1, 524) = v10;
  FIELD_F32(a1, 528) = v10;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C1821C, 0);
  v11 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 188));
  }
  v12 = FIELD_F32(a1, 148);
  FIELD_U32(a1, 304) = 0;
  FIELD_F32(a1, 308) = v12 * 12.0;
  FIELD_F32(a1, 312) = FIELD_F32(a1, 6120) * 0.5;
  FIELD_U32(a1, 316) = 0x40000000;
  LOWORD(v13) = 0;
  LOWORD(v14) = 0;
  if ( (FIELD_U8(a1, 20) & 0x10) != 0 )
  {
    HIWORD(v13) = -16064;
    HIWORD(v14) = 16704;
  }
  else
  {
    HIWORD(v13) = -16320;
    HIWORD(v14) = 16448;
  }
  FIELD_U32(a1, 6144) = v13;
  FIELD_U32(a1, 6148) = v14;
  FIELD_F32(a1, 6152) = FIELD_F32(a1, 144) * 48.0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, (CollisionMgr_Sensor *)(a1 + 6144));
  FIELD_U32(a1, 3176) |= 0x80000000;
  FIELD_U32(a1, 3184) |= 0x80000000;
  v15 = FIELD_U32(a1, 3188);
  FIELD_U32(a1, 3180) |= 0x203u;
  FIELD_U32(a1, 3188) = v15 | 0x203;
  v16 = FIELD_U32(a1, 8);
  FIELD_U32(a1, 6160) = v16;
  FIELD_U32(a1, 6172) = v16;
  FIELD_U32(a1, 6184) = v16;
  FIELD_U32(a1, 6196) = v16;
  FIELD_U32(a1, 6208) = v16;
  FIELD_U32(a1, 6220) = v16;
  FIELD_U32(a1, 6232) = v16;
  FIELD_U32(a1, 6244) = v16;
  FIELD_U32(a1, 6256) = v16;
  FIELD_U32(a1, 6268) = v16;
  FIELD_U32(a1, 6280) = v16;
  FIELD_U32(a1, 6292) = v16;
  sub_6069A5B0(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB950C);
  return 1;
}
