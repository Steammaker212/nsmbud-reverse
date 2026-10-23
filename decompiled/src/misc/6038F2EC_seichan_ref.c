/* seichan_ref
 * address: 0x6038F2EC   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall seichan_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r1
  ActiveColliderMgr *v8; // r7
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r6
  int v11; // s2
  int *v12; // r1
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  FIELD_U32(a1, 116) = 1153138688;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "seichan";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  sub_60421938(v4, (int)ResArchiveById, (int)&a2);
  FIELD_U32(a1, 6304) = (FIELD_U32(a1, 20) >> 8) & 3;
  ((void (__fastcall *)(int))loc_6038F68C)(a1);
  v6 = FIELD_U32(a1, 80);
  v7 = dword_60C96F04;
  if ( v6 == 1 )
    v7 = -dword_60C96F04;
  FIELD_U32(a1, 160) = v7;
  FIELD_U32(a1, 6312) = v6;
  FIELD_U32(a1, 6316) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6320) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6324) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1094713344;
  FIELD_U32(a1, 580) = 0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B0085C, &stru_60B00868, &stru_60B00874);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF3FC4, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 6452), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF3FF0, 0);
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 188));
  }
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6452))
    && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 6452)) )
  {
    ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 6452));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6756), (StageActor *)a1, &stru_60B00880, a1 + 7060);
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6756))
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 6756)) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 6756));
  }
  FIELD_U32(a1, 6392) = 3;
  FIELD_U32(a1, 620) = a1 + 6376;
  FIELD_U32(a1, 6440) = 1;
  FIELD_U32(a1, 624) = a1 + 6412;
  FIELD_U8(a1, 6308) = (FIELD_U32(a1, 20) & 0x10) == 0;
  FIELD_F64(a1, 7068) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 7064))(a1 + 7064);
  FIELD_U32(a1, 7076) = v11;
  sub_6038F8CC(a1);
  sub_6038FA88(a1);
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
    v12 = &dword_60C96E14;
  else
    v12 = &dword_60C96E54;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v12);
  return 1;
}
