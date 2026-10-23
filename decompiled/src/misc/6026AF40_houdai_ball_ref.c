/* houdai_ball_ref
 * address: 0x6026AF40   size: 912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall houdai_ball_ref(int a1)
{
  unsigned int v2; // r2
  int v3; // r0
  float v4; // s0
  float v5; // s2
  ActiveCollider *v6; // r5
  ActiveColliderMgr *v7; // r4
  CollisionMgr *v8; // r0
  int v9; // lr
  int v10; // r8
  int v11; // r7
  int v12; // r6
  double (__fastcall **v13)(int); // t1
  int v14; // s2
  void *v15; // r0
  int v16; // r8
  void *Model2; // r4
  ModelWrapper *v18; // r7
  ModelWrapper *v19; // r0
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  FIELD_U32(a1, 6344) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 116) = -1031798784;
  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6316) = v2 & 0xF;
  v3 = (unsigned __int8)v2 >> 4;
  FIELD_U32(a1, 6320) = v3;
  FIELD_U32(a1, 6324) = (v2 >> 20) & 1;
  FIELD_U32(a1, 6328) = (v2 >> 21) & 1;
  FIELD_U32(a1, 6332) = (v2 >> 8) & 0xF;
  v4 = flt_60AF4A90[v3];
  if ( (v2 & 0xF) == 1 )
  {
    v6 = (ActiveCollider *)(a1 + 188);
    FIELD_F32(a1, 120) = v4 + v4;
    FIELD_F32(a1, 124) = flt_60AF4AB0[v3] + flt_60AF4AB0[v3];
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 144) = 1069547520;
    FIELD_U32(a1, 148) = 1069547520;
    FIELD_U32(a1, 152) = 1069547520;
    ActiveCollider__init(
      (ActiveCollider *)(a1 + 188),
      (StageActor *)a1,
      (ActiveColliderInfo *)&unk_60BDC4B0,
      a1 + 11740);
    v5 = FIELD_F32(a1, 148) * 8.0;
    FIELD_F32(a1, 312) = FIELD_F32(a1, 144) * 8.0;
    FIELD_F32(a1, 316) = v5;
    FIELD_U32(a1, 620) = 0;
    FIELD_U32(a1, 492) = 1115684864;
    FIELD_U32(a1, 496) = 1111490560;
    FIELD_U32(a1, 6244) = 0;
  }
  else
  {
    FIELD_F32(a1, 120) = v4;
    v6 = (ActiveCollider *)(a1 + 188);
    FIELD_F32(a1, 124) = flt_60AF4AB0[v3];
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    ActiveCollider__init(
      (ActiveCollider *)(a1 + 188),
      (StageActor *)a1,
      (ActiveColliderInfo *)&unk_60BDC4DC,
      a1 + 11740);
    if ( (FIELD_U32(a1, 6320) & 0xFFFFFFFE) == 4 )
    {
      FIELD_U32(a1, 6340) = 1082130432;
      FIELD_U32(a1, 312) = 1082130432;
      FIELD_U32(a1, 316) = 1082130432;
    }
    FIELD_U32(a1, 640) = 0;
    FIELD_U32(a1, 492) = 1107296256;
    FIELD_U32(a1, 496) = 1098907648;
  }
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6) && !ActiveColliderMgr_isInCreateList(v7, v6) )
    ActiveColliderMgr_addToCreateList(v7, v6);
  v8 = (CollisionMgr *)(a1 + 6352);
  if ( FIELD_U32(a1, 6316) == 1 )
    CollisionMgr_init(v8, (StateActor *)a1, &stru_60AFDB4C, &stru_60AFDB40, &stru_60AFDB58);
  else
    CollisionMgr_init(v8, (StateActor *)a1, &stru_60AFDB70, &stru_60AFDB64, &stru_60AFDB7C);
  v9 = FIELD_U32(a1, 8888);
  v10 = FIELD_U32(a1, 8880);
  v11 = FIELD_U32(a1, 8896);
  FIELD_U32(a1, 8904) |= 0x50000800u;
  FIELD_U32(a1, 8896) = v11 | 0x50000800;
  FIELD_U32(a1, 8880) = v10 | 0x50000800;
  FIELD_U32(a1, 8888) = v9 | 0x50000800;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E774);
  v13 = *(double (__fastcall ***)(int))(a1 + 11708);
  v12 = a1 + 11708;
  FIELD_F64(v12, 4) = (*v13)(v12);
  FIELD_U32(v12, 12) = v14;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "houdai_ball";
  v15 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v16 = (int)v15;
  a2.cstr = "houdai_ball";
  Model2 = (void *)Resource_getModel2(v15, &a2, 0, 0, 0, 0, 0, 0, 0);
  v18 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v19 = ModelWrapper_ctor(v18, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v19, v16, 0, 0);
  *(_DWORD *)(v12 - 5408) = v18;
  return 1;
}
