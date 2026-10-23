/* ShellEnemy__vf110
 * address: 0x603A1418   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D9C
// 
// Overridden by: None
void __fastcall ShellEnemy__vf110(_DWORD *a1, int a2, int a3)
{
  int v4; // r7

  v4 = a1[20];
  if ( v4 == sub_602725AC((int)a1, a2, a3) )
    Enemy__vf110();
  else
    (*(void (__fastcall **)(_DWORD *))(*a1 + 712))(a1);
}
