/* sub_602F5C24
 * address: 0x602F5C24   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F5C24(int a1)
{
  int v2; // r0
  int v3; // r1
  signed int v4; // r0
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  int v7; // s2

  v2 = sub_6000A53C((_BYTE *)EnemyCounterMaybe_instance);
  FIELD_U32(a1, 6328) = v2;
  if ( v2 < 0 )
  {
    FIELD_U32(a1, 116) = 1153138688;
  }
  else
  {
    FIELD_F32(a1, 116) = (float)((float)v2 * 16.0) + 1500.0;
    v3 = EnemyCounterMaybe_instance;
    if ( (unsigned int)v2 < 0xA )
      v3 = EnemyCounterMaybe_instance + v2;
    FIELD_U8(v3, 180) = 1;
  }
  sub_602F5ED8(a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 96) = -1065353216;
  v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v4;
  FIELD_U32(a1, 160) = byte_60AFE3F4[v4] * FIELD_U32(a1, 6356);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE792C, 0);
  FIELD_U32(a1, 320) = 1;
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6564), (StageActor *)a1, &stru_60AFEE98, 0);
  FIELD_U32(a1, 6696) = 1;
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6564))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 6564)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 6564));
  }
  FIELD_U32(a1, 6676) = a1 + 6900;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFEEC4, &stru_60AFEED0, &stru_60AFEEDC);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 620) = a1 + 6376;
  FIELD_U32(a1, 6392) = 0;
  FIELD_U32(a1, 624) = a1 + 6412;
  FIELD_U32(a1, 6440) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U8(a1, 6056) = 1;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92850);
  FIELD_F64(a1, 6872) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6868))(a1 + 6868);
  FIELD_U32(a1, 6880) = v7;
  ((void (__fastcall *)(int))loc_602F6080)(a1);
  return 1;
}
