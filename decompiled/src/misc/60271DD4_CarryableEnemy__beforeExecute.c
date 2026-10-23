/* CarryableEnemy__beforeExecute
 * address: 0x60271DD4   size: 4   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A1BC8
// 
// Overridden by:
//   - 0x6039F350 : ShellEnemy
// attributes: thunk
signed int __fastcall CarryableEnemy__beforeExecute(CollisionActor *a1)
{
  return Enemy__beforeExecute(a1);
}
