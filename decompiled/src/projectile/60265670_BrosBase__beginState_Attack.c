/* BrosBase__beginState_Attack
 * address: 0x60265670   size: 36   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall BrosBase__beginState_Attack(_DWORD *a1)
{
  _DWORD *v1; // r4

  v1 = a1 + 1689;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 780))(a1);
  *v1 = 1;
  return 1;
}
