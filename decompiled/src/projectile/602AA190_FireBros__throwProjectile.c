/* FireBros__throwProjectile
 * address: 0x602AA190   size: 44   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267594
// 
// Overridden by: None
int __fastcall FireBros__throwProjectile(int a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 0x2D4))(a1);
  if ( result )
    JUMPOUT(0x602A9B88);
  return result;
}
