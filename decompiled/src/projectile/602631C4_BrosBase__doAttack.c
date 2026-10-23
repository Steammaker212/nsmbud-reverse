/* BrosBase__doAttack
 * address: 0x602631C4   size: 32   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602CC608 : HammerBros
int __fastcall BrosBase__doAttack(_DWORD *a1)
{
  a1[1641] = 1;
  return (*(int (__fastcall **)(_DWORD *, StateVirtual *))(*a1 + 0xC0))(a1, &BroBase_StateID_Attack);
}
