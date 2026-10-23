/* SumoBrosBoss__vf2D0
 * address: 0x60031F54   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026744
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf2D0(int a1)
{
  int result; // r0

  result = (FIELD_U32(a1, 6300) - 1) / FIELD_U32(a1, 6304);
  if ( result != 1 )
    return 0;
  return result;
}
