/* BrosBase__doAirAttack
 * address: 0x6026317C   size: 52   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602CD030 : HammerBros
int __fastcall BrosBase__doAirAttack(int a1)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 0x2F8))(a1);
  return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_AirAttack);
}
