/* HammerBros__createProjectile
 * address: 0x602CC208   size: 60   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267590
// 
// Overridden by: None
_DWORD *__fastcall HammerBros__createProjectile(_DWORD *a1)
{
  _DWORD *result; // r0
  int v3; // t1

  result = HammerBros_createHammer(a1);
  if ( result )
  {
    a1[1652] = result[2];
    v3 = result[2974];
    result += 2974;
    if ( !v3 )
      *result = a1[2];
  }
  return result;
}
