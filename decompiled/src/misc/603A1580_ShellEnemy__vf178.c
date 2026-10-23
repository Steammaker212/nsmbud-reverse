/* ShellEnemy__vf178
 * address: 0x603A1580   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A33A4
// 
// Overridden by: None
void __fastcall ShellEnemy__vf178(_BYTE *a1, int a2)
{
  if ( !(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 736))(a1) && !a1[6393] )
    Enemy__vf178((int)a1, a2);
}
