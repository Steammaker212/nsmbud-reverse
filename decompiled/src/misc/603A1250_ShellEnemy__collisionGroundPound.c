/* ShellEnemy__collisionGroundPound
 * address: 0x603A1250   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6454
// 
// Overridden by: None
signed int __fastcall ShellEnemy__collisionGroundPound(int a1, int a2, int a3)
{
  if ( FIELD_U8(a1, 6392) )
    return sub_603A126C();
  else
    return Enemy__collisionGroundPound((int *)a1, a2, a3);
}
