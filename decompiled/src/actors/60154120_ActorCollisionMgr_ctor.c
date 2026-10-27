/* ActorCollisionMgr_ctor
 * address: 0x60154120   size: 28   group: actors
 * sym: # ActorCollisionMgr_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall ActorCollisionMgr_ctor(CollisionMgr *a1)
{
  _DWORD *result; // r0

  result = CollisionMgr_ctor(a1);
  *result = ActorCollisionMgr_vtable;
  return result;
}
