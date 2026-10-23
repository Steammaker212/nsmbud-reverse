/* j_Enemy_collisionCallback
 * address: 0x6003708C   size: 4   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
unsigned int __fastcall j_Enemy_collisionCallback(ActiveCollider *a1, ActiveCollider *a2)
{
  return Enemy__collisionCallback(a1, a2);
}
