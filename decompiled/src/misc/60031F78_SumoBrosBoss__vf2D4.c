/* SumoBrosBoss__vf2D4
 * address: 0x60031F78   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x6002674C
// 
// Overridden by: None
bool __fastcall SumoBrosBoss__vf2D4(int a1)
{
  return (FIELD_U32(a1, 6300) - 1) / FIELD_U32(a1, 6304) < 1;
}
