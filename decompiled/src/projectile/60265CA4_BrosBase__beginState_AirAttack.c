/* BrosBase__beginState_AirAttack
 * address: 0x60265CA4   size: 64   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602CC93C : HammerBros
int __fastcall BrosBase__beginState_AirAttack(_DWORD *a1)
{
  _DWORD *v2; // r5

  v2 = a1 + 1689;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 780))(a1);
  a1[1646] = 0;
  a1[1647] = 0;
  *v2 = 1;
  return 1;
}
