/* ShellEnemy__collisionPropellerDrill
 * address: 0x603A1344   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6128
// 
// Overridden by: None
signed int __fastcall ShellEnemy__collisionPropellerDrill(int a1, int a2, int a3)
{
  if ( FIELD_U8(a1, 6392) )
    return sub_603A126C(a1, a3);
  else
    return Enemy__collisionPropellerDrill((int *)a1, a2, a3);
}
