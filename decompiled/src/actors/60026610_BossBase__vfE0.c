/* BossBase__vfE0
 * address: 0x60026610   size: 12   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A33A8
// 
// Overridden by:
//   - 0x600396BC : BowserJrBase
int __fastcall BossBase__vfE0(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 0x3F0))(a1);
}
