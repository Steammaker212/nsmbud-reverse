/* ShellEnemy__vf90
 * address: 0x603A4F60   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x6000401C
// 
// Overridden by: None
int __fastcall ShellEnemy__vf90(_BYTE *a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 148))(a1);
  if ( result == 1 )
  {
    a1[6608] = 0;
    return 6608;
  }
  return result;
}
