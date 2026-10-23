/* sub_6082D5D8
 * address: 0x6082D5D8   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6082D5D8(StageActor *a1)
{
  ActiveCollider *p_aCollider; // r5
  ActiveColliderMgr *v3; // r6

  p_aCollider = &FIELD_U32(a1, 0xBC);
  FIELD_U32(a1, 0x4C) |= 2u;
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), a1, (ActiveColliderInfo *)&unk_60C2A968, 0);
  FIELD_F32(a1, 0x130) = 16.0;
  FIELD_F32(a1, 0x134) = -8.0;
  FIELD_F32(a1, 0x138) = 16.0;
  FIELD_F32(a1, 0x13C) = 8.0;
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider)
    && !ActiveColliderMgr_isInCreateList(v3, p_aCollider) )
  {
    ActiveColliderMgr_addToCreateList(v3, p_aCollider);
  }
  StateMgr__changeState((StateMgr *)&a1[9].aCollider.field_64, (StateBase *)&dword_60CC6E88);
  return 1;
}
