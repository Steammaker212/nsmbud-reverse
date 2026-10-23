/* StageActor__addActiveColliders
 * address: 0x600009A8   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6027820C : Fuzzy
//   - 0x602D78FC : SledgeBro
//   - 0x6031755C : DryBones
//   - 0x6033D848 : GoombaBase
//   - 0x60381740 : Pokey
//   - 0x603E0198 : RiverPiranha
//   - 0x60624060 : FixedIcicle
//   - 0x60026508 : BossBase
ActiveColliderMgr *__fastcall StageActor__addActiveColliders(StageActor *this)
{
  ActiveCollider *aCollider; // r5
  ActiveColliderMgr *aColliderMgr; // r4
  ActiveColliderMgr *result; // r0

  aCollider = &FIELD_U32(this, 0xBC);
  aColliderMgr = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(this, 0xBC));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(aColliderMgr, aCollider);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(aColliderMgr, aCollider);
  }
  return result;
}
