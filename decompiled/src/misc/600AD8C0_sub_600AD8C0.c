/* sub_600AD8C0
 * address: 0x600AD8C0   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AD8C0(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r0
  char v5; // r12
  ActiveColliderMgr *v6; // r6
  _DWORD v8[10]; // [sp+8h] [bp-28h] BYREF

  ice_kameck_ref(a1);
  FIELD_U32(a1, 7084) = (unsigned __int16)FIELD_U32(a1, 20) >> 12;
  FIELD_U32(a1, 116) = 1152614400;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF57B8, &stru_60AF57C4, &stru_60AF57D0);
  v2 = FIELD_U32(a1, 3184);
  v3 = FIELD_U32(a1, 3192) | 0x40000800;
  v4 = FIELD_U32(a1, 3176) | 0x40000800;
  FIELD_U32(a1, 3200) |= 0x40000800u;
  FIELD_U32(a1, 3192) = v3;
  FIELD_U32(a1, 3176) = v4;
  FIELD_U32(a1, 3184) = v2 | 0x40000800;
  if ( ((unsigned int)algn_60C83114 & ~(1611323760 << v5) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C83114) )
  {
    dword_60C83124[0] = -1048576000;
    dword_60C83124[1] = 1107296256;
    dword_60C83124[2] = 1098907648;
    unk_60C83130 = 1107296256;
    unk_60C83134 = 1098907648;
    unk_60C83138 = 0;
    dword_60C8313C = -1048576000;
    dword_60C83140 = 0;
    _cxa_guard_release((__guard *)algn_60C83114);
  }
  memset(v8, 0, 12);
  v8[3] = 1098907648;
  v8[4] = dword_60C83124;
  v8[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 6112), a1, v8);
  FIELD_U32(a1, 6432) = SE_OBJ_ICICLE_BREAK_ref_ADC18;
  FIELD_U32(a1, 6428) = SE_OBJ_ICICLE_BREAK_ref_AE0B4;
  ActiveCollider__init((ActiveCollider *)(a1 + 6768), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC8F84, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC8FB0, 0);
  FIELD_U32(a1, 348) = -1050673152;
  FIELD_U32(a1, 352) = 1096810496;
  FIELD_U32(a1, 356) = -1082130432;
  FIELD_U32(a1, 360) = 1065353216;
  ActiveCollider__init((ActiveCollider *)(a1 + 7116), (StageActor *)a1, &stru_60AF57DC, a1 + 7420);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7116))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 7116)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 7116));
  }
  sub_600AE514(a1);
  return 1;
}
