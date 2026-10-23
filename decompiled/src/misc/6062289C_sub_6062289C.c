/* sub_6062289C
 * address: 0x6062289C   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062289C(int a1)
{
  ActiveColliderMgr *v2; // r6
  char v3; // r12
  _DWORD v5[12]; // [sp+8h] [bp-30h] BYREF

  FIELD_U32(a1, 116) = -1027604480;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C11970, 0);
  FIELD_U32(a1, 348) = -1056964608;
  FIELD_U32(a1, 352) = 1090519040;
  FIELD_U32(a1, 356) = -1082130432;
  FIELD_U32(a1, 360) = 1065353216;
  ActiveCollider__init((ActiveCollider *)(a1 + 6332), (StageActor *)a1, &stru_60B06880, a1 + 6636);
  FIELD_U32(a1, 6492) = -1040187392;
  FIELD_U32(a1, 6496) = 1107296256;
  FIELD_U32(a1, 6500) = -1082130432;
  FIELD_U32(a1, 6504) = 1065353216;
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6332))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 6332)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 6332));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B068AC, 0, 0);
  FIELD_U32(a1, 3200) |= 0x1C000E00u;
  if ( ((unsigned int)algn_60CB3A74 & ~(1617045948 << v3) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60CB3A74) )
  {
    dword_60CB3A84[0] = -1040187392;
    dword_60CB3A84[1] = 0;
    dword_60CB3A84[2] = 1107296256;
    dword_60CB3A90 = 0;
    dword_60CB3A94 = 1082130432;
    dword_60CB3A98 = -1030750208;
    dword_60CB3A9C = -1065353216;
    dword_60CB3AA0 = -1030750208;
    _cxa_guard_release((__guard *)algn_60CB3A74);
  }
  memset(v5, 0, 12);
  v5[3] = -1031798784;
  v5[4] = dword_60CB3A84;
  v5[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 6664), a1, v5);
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6664), 1);
  return sub_6069AFA0(a1 + 7320, a1 + 108, a1 + 492, a1 + 500, a1 + 6664);
}
