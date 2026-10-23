/* sub_603B6D04
 * address: 0x603B6D04   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B6D04(int a1)
{
  int v2; // s2
  unsigned int v3; // r0
  int v4; // r7
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  int v7; // r5
  CollisionMgr_Sensor adjacentSensor; // [sp+8h] [bp-48h] BYREF
  CollisionMgr_Sensor a4; // [sp+18h] [bp-38h] BYREF
  CollisionMgr_Sensor a3; // [sp+28h] [bp-28h] BYREF

  FIELD_U32(a1, 6440) = 1048576000;
  FIELD_U32(a1, 6444) = -1098907648;
  if ( sub_6068C438(MaskMgr_instance) == 1 )
    FIELD_U8(a1, 22648) = 1;
  FIELD_F64(a1, 23092) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 23088))(a1 + 23088);
  FIELD_U32(a1, 23100) = v2;
  v3 = FIELD_U32(a1, 20);
  v4 = v3 & 1;
  FIELD_U32(a1, 22544) = (v3 >> 4) & 3;
  FIELD_U32(a1, 80) = v4;
  a3.c = -7.0;
  a3.b = 0.0;
  a3.a = -0.0;
  a4.c = 7.0;
  adjacentSensor.c = 7.0;
  a4.b = 0.0;
  adjacentSensor.b = 0.0;
  a4.a = -0.0;
  adjacentSensor.a = -0.0;
  CollisionMgr_init((CollisionMgr *)(a1 + 17192), (StateActor *)a1, &stru_60B00CEC, &stru_60B00CF8, &stru_60B00D04);
  CollisionMgr_init((CollisionMgr *)(a1 + 11840), (StateActor *)a1, &stru_60B00D10, &stru_60B00D1C, &stru_60B00D28);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &a3, &a4, &adjacentSensor);
  met_toge_ref(a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF5C98, 0);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 22780), (StageActor *)a1, &stru_60B00CA0, a1 + 23084);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 22780))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 22780)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 22780));
  }
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1098907648;
  FIELD_U32(a1, 504) = 1098907648;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v4];
  FIELD_U32(a1, 6372) = 3;
  FIELD_U32(a1, 620) = a1 + 6356;
  FIELD_U32(a1, 624) = a1 + 6392;
  FIELD_U32(a1, 6420) = 1;
  FIELD_U32(a1, 6244) = 0;
  if ( Actor__getProfileId((Actor *)a1) == 678 )
    FIELD_U8(a1, 534) = 0;
  FIELD_U32(a1, 22652) = 0;
  v7 = sub_603B7330(a1);
  ((void (__fastcall *)(int))loc_603B7478)(a1);
  FIELD_U32(a1, 156) = FIELD_U32(a1, 6464);
  if ( FIELD_U8(a1, 536) )
    sub_603B869C(a1);
  else
    sub_603B887C(a1);
  FIELD_U32(a1, 6448) = *(_DWORD *)(a1 + 4 * FIELD_U32(a1, 80) + 6440);
  if ( v7 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9818C);
  }
  else
  {
    FIELD_U8(a1, 22644) = 0;
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9822C);
  }
  return 1;
}
