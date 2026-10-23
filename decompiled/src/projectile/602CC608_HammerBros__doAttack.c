/* HammerBros__doAttack
 * address: 0x602CC608   size: 64   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x602631C4
// 
// Overridden by: None
int __fastcall HammerBros__doAttack(_DWORD *a1)
{
  int v1; // r1

  v1 = ((unsigned __int8)a1[3119] + 1) & 7;
  a1[3119] = v1;
  a1[1641] = dword_60AF4B10[v1];
  return (*(int (__fastcall **)(_DWORD *, StateVirtual *))(*a1 + 192))(a1, &BroBase_StateID_Attack);
}
