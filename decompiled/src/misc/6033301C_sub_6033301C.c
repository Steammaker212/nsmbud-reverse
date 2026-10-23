/* sub_6033301C
 * address: 0x6033301C   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033301C(int a1)
{
  ActiveColliderMgr *v2; // r7
  ActiveColliderMgr *v3; // r6
  signed int v4; // r0
  int v5; // s2
  int v6; // r0
  bool v7; // zf

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  if ( (FIELD_U8(a1, 20) & 1) == 0 )
  {
    FIELD_U32(a1, 516) = 1117782016;
    FIELD_U32(a1, 520) = 1117782016;
    FIELD_U32(a1, 524) = 0;
    FIELD_U32(a1, 528) = 0;
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEC824, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 6656), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEC850, a1 + 6652);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6656))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 6656)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 6656));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFF9C8, &stru_60AFF9D4, &stru_60AFF9E0);
  v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v4;
  FIELD_U32(a1, 160) = (int)(float)((float)(2147500000.0 * 35.0) / 180.0) * byte_60AFE3F4[v4];
  FIELD_U8(a1, 6998) = 1;
  FIELD_U32(a1, 100) = -1097229926;
  FIELD_U32(a1, 136) = -1058013184;
  FIELD_U32(a1, 3192) |= 0x40000000u;
  FIELD_F64(a1, 6308) = ((double (__fastcall *)(int, float))**(_DWORD **)(a1 + 6304))(
                             a1 + 6304,
                             COERCE_FLOAT((int)(float)((float)(2147500000.0 * 35.0) / 180.0)));
  FIELD_U32(a1, 6316) = v5;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93F88);
  v6 = FIELD_U32(a1, 12);
  v7 = v6 == 0;
  if ( v6 )
  {
    v6 = FIELD_U32(v6, 12);
    v7 = v6 == 0;
  }
  if ( !v7 && (FIELD_U8(v6, 32) & 2) != 0 )
    FIELD_U8(a1, 6056) = 1;
  return 1;
}
