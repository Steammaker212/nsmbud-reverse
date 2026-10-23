/* Enemy__vf264
 * address: 0x602A9420   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602785A0 : Fuzzy
//   - 0x60078B28 : FinalBowser
//   - 0x60310008 : Kanibo
signed int __fastcall Enemy__vf264(Enemy *this)
{
  SE_OBJ_PNGN_ICE_FREEZE_ref(&FIELD_U32(this, 0x1808));
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(this, 0x0)._._._.vtable + 0xD0))(this);// Freeze
  CollisionMgr_vf14((int)FIELD_U32(this, 0x0)._.collisionMgr);
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(this, 0x0)._._._.vtable + 0xD4))(this);
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(this, 0x0)._._._.vtable + 72))(this);// Remove Colliders
  LOBYTE(FIELD_U32(this, 0x1808).field_44) = 1;
  FIELD_U32(this, 0x0)._.field_17A7 = 1;
  return 1;
}
