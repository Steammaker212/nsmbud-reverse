/* sub_60375CB8
 * address: 0x60375CB8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60375CB8(int a1)
{
  ActiveColliderInfo *v2; // r0
  ActiveColliderMgr *v3; // r6
  CollisionMgr_Sensor *v4; // r0
  int v5; // r0
  int *v6; // r1
  EnemyFreezeMgr_Flags v8; // [sp+4h] [bp-14h] BYREF

  pukupuku_toge_ref();
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1115684864;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  v2 = (ActiveColliderInfo *)sub_60373ABC();
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, v2, a1 + 11756);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  v8.field_0 = 2;
  v8.field_1 = 0;
  v8.field_2 = 4;
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), &v8);
  v4 = (CollisionMgr_Sensor *)sub_60373ACC();
  CollisionMgr_init((CollisionMgr *)(a1 + 6304), (StateActor *)a1, v4, v4 + 1, v4 + 2);
  v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 11956) = v5;
  FIELD_U32(a1, 80) = v5;
  FIELD_U32(a1, 160) = sub_603737E4(a1, v5);
  FIELD_U32(a1, 624) = a1 + 11720;
  FIELD_U32(a1, 11748) = 1;
  if ( FIELD_U32(a1, 11688) == 1 )
    v6 = &dword_60C96360;
  else
    v6 = (int *)&unk_60C963A8;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v6);
  return 1;
}
