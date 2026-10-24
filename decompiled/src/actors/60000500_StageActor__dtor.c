/* StageActor__dtor
 * address: 0x60000500   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002D98
// 
// Overridden by:
//   - 0x60003F94 : CollisionActor
Actor *__fastcall StageActor__dtor(Actor *a1)
{
  ActiveCollider *p_movementId; // r5
  ActiveColliderMgr *v3; // r6

  FIELD_U32(a1, 0x0) = (int)&StageActor__vtable;
  p_movementId = (ActiveCollider *)&FIELD_U8(a1 + (2) * 80, 0x1C);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&FIELD_U8(a1 + (2) * 80, 0x1C));
  ActiveColldierMgr_removeFromCreateList(v3, p_movementId);
  ActiveColldierMgr_removeFromList3(v3, (int)p_movementId);
  ActiveCollider_dtor(p_movementId);
  return Actor__dtor(a1);
}
