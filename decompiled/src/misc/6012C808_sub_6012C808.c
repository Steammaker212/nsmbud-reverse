/* sub_6012C808
 * address: 0x6012C808   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012C808(int a1)
{
  char v2; // r12
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  _DWORD v7[14]; // [sp+8h] [bp-38h] BYREF

  sub_6012CB54();
  FIELD_U32(a1, 116) = -987594752;
  FIELD_U32(a1, 6960) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6964) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6968) = -987594752;
  FIELD_U32(a1, 144) = 0x40000000;
  FIELD_U32(a1, 148) = 0x40000000;
  FIELD_U32(a1, 152) = 0x40000000;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF6484, 0, 0);
  FIELD_U32(a1, 3200) |= 0x800u;
  if ( ((unsigned int)dword_60C873F0 & ~(1611843728 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C873F0) )
  {
    dword_60C873F0[1] = -1049624576;
    dword_60C873F0[2] = 0;
    dword_60C873F0[3] = 1097859072;
    dword_60C87400 = 0;
    dword_60C87404 = 1086324736;
    dword_60C87408 = -1045430272;
    dword_60C8740C = -1061158912;
    dword_60C87410 = -1045430272;
    _cxa_guard_release(dword_60C873F0);
  }
  memset(v7, 0, 12);
  v7[3] = -1048576000;
  v7[4] = &dword_60C873F0[1];
  v7[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 6304), a1, v7);
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6304), 1);
  FIELD_U32(a1, 6440) |= 0x80u;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6304));
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD1B6C, 0);
  FIELD_U32(a1, 348) = -1056964608;
  FIELD_U32(a1, 352) = 1090519040;
  FIELD_U32(a1, 356) = -1082130432;
  FIELD_U32(a1, 360) = 1065353216;
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6976), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD1B98, 0);
  FIELD_U32(a1, 7136) = -1048576000;
  FIELD_U32(a1, 7140) = 1098907648;
  FIELD_U32(a1, 7144) = -1082130432;
  FIELD_U32(a1, 7148) = 1065353216;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6976))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6976)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6976));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 7280), (StageActor *)a1, &stru_60AF6490, a1 + 7584);
  FIELD_U32(a1, 7440) = -1048576000;
  FIELD_U32(a1, 7444) = 1098907648;
  FIELD_U32(a1, 7448) = -1082130432;
  FIELD_U32(a1, 7452) = 1065353216;
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7280))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 7280)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 7280));
  }
  sub_6012CC68(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C87384);
  return 1;
}
