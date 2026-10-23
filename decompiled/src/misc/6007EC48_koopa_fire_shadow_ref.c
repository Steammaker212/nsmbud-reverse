/* koopa_fire_shadow_ref
 * address: 0x6007EC48   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall koopa_fire_shadow_ref(int a1)
{
  void *v2; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r6
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  int v11; // r1
  float *v12; // r5
  StateMgr *v13; // r0
  int *v14; // r1
  int v15; // s0
  int v16; // r0
  int v17; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF
  int v20; // [sp+20h] [bp-20h]
  int v21; // [sp+24h] [bp-1Ch]

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopa_model";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopa_fire_shadow";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  *((_DWORD *)FIELD_U32(v4, 0x0) + 9) = 8;
  FIELD_U32(a1, 6356) = 24;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC7098, 0);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6360), (StageActor *)a1, &stru_60AF5508, a1 + 6664);
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 6360)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 6360));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5534, &stru_60AF5540, &stru_60AF554C);
  v8 = FIELD_U32(a1, 3184);
  v9 = FIELD_U32(a1, 3192) | 0xD0000800;
  v10 = FIELD_U32(a1, 3176) | 0xD0000800;
  FIELD_U32(a1, 3200) |= 0xD0000800;
  FIELD_U32(a1, 3192) = v9;
  FIELD_U32(a1, 3176) = v10;
  FIELD_U32(a1, 3184) = v8 | 0xD0000800;
  FIELD_U32(a1, 568) |= 0x80u;
  v11 = FIELD_U32(a1, 20) & 0xF0;
  FIELD_U32(a1, 6344) = FIELD_U32(a1, 20) & 0xF;
  if ( v11 == 48 )
  {
    FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 48.0;
    FIELD_U32(a1, 144) = 1074161254;
    v12 = (float *)(a1 + 144);
    FIELD_U32(a1, 148) = 1074161254;
    FIELD_U32(a1, 152) = 1074161254;
    FIELD_U32(a1, 6108) = 1048576000;
    FIELD_U32(a1, 6112) = 1077936128;
    FIELD_U32(a1, 500) = 1107715686;
    FIELD_U32(a1, 504) = 1122186035;
    FIELD_U32(a1, 508) = 1107715686;
    FIELD_U32(a1, 512) = 1122186035;
    FIELD_U32(a1, 312) = 1101529088;
    FIELD_U32(a1, 316) = 1101529088;
    FIELD_U32(a1, 6484) = 1103731098;
    FIELD_U32(a1, 6488) = 1103731098;
    v13 = (StateMgr *)(a1 + 6084);
    v14 = &dword_60C81888;
  }
  else
  {
    FIELD_U32(a1, 0x90) = 1074077368;
    v12 = (float *)(a1 + 0x90);
    FIELD_U32(a1, 148) = 1074077368;
    FIELD_U32(a1, 152) = 1074077368;
    FIELD_U32(a1, 6108) = 1048576000;
    FIELD_U32(a1, 6112) = 1069547520;
    FIELD_U32(a1, 500) = 1122144092;
    FIELD_U32(a1, 504) = 1122144092;
    FIELD_U32(a1, 508) = 1122144092;
    FIELD_U32(a1, 512) = 1122144092;
    if ( v11 == 16 )
    {
      v15 = 1102472806;
      v16 = 1102472806;
      FIELD_U32(a1, 308) = -1073741824;
    }
    else
    {
      v15 = 1101424230;
      v16 = 1101424230;
    }
    FIELD_U32(a1, 312) = v16;
    FIELD_U32(a1, 316) = v15;
    FIELD_U32(a1, 6484) = 1103605269;
    FIELD_U32(a1, 6488) = 1103605269;
    v13 = (StateMgr *)(a1 + 6084);
    if ( v11 == 32 )
      v14 = &dword_60C81868;
    else
      v14 = &dword_60C81848;
  }
  StateMgr__changeState(v13, (StateBase *)v14);
  LightSource_update1((LightSource *)(a1 + 6116), 41, (Vec3 *)(a1 + 108), 0, v12, 0, 0, 0, 0);
  sub_6007F0B0(a1);
  if ( FIELD_U8(a1, 6104) )
  {
    v17 = (*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6100) + 132))(**(_DWORD **)(a1 + 6100), 0);
    a2.vtable = (void *)1028443341;
    a2.cstr = (char *)1028443341;
    v20 = 1028443341;
    v21 = 1053609165;
    (*(void (__fastcall **)(int, _DWORD, sead__SafeString *))(*(_DWORD *)v17 + 20))(v17, 0, &a2);
  }
  return 1;
}
