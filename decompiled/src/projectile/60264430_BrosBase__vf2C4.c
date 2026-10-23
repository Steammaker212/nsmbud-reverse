/* BrosBase__vf2C4
 * address: 0x60264430   size: 40   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602CBF50 : HammerBros
//   - 0x602A9CF0 : FireBros
__n64 __fastcall BrosBase__vf2C4(Enemy *a1)
{
  __n64 result; // d0

  result.n64_u32[0] = *(_DWORD *)&a1[1]._._._._.field_10;
  result.n64_u32[1] = (unsigned __int32)a1[1]._._._._.field_20.previous;
  return result;
}
