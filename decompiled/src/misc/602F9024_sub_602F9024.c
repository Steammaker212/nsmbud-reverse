/* sub_602F9024
 * address: 0x602F9024   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F9024(int a1)
{
  ActiveColliderMgr *v2; // r6
  int v3; // s2

  sub_602F91A4(a1);
  FIELD_F32(a1, 6468) = (float)(((2 * FIELD_U32(a1, 20)) & 6u) + 6) * 16.0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE7C2C, a1 + 11896);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 6544), (StateActor *)a1, &stru_60AFEF30, &stru_60AFEF3C, 0);
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 500) = 1126170624;
  FIELD_U32(a1, 504) = 1126170624;
  FIELD_U32(a1, 508) = 1126170624;
  FIELD_U32(a1, 512) = 1126170624;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92934);
  FIELD_F64(a1, 11908) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 11904))(a1 + 11904);
  FIELD_U32(a1, 11916) = v3;
  mat_kurage_eye_ref(a1);
  FIELD_U8(a1, 6056) = 1;
  return 1;
}
