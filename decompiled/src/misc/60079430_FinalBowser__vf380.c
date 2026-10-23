/* FinalBowser__vf380
 * address: 0x60079430   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268F8
// 
// Overridden by: None
int __fastcall FinalBowser__vf380(int a1)
{
  return (FIELD_U8(a1, 7144) >> 1) & 1;
}
