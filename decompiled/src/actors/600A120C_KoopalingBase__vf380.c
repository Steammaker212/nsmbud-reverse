/* KoopalingBase__vf380
 * address: 0x600A120C   size: 16   group: actors
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
int __fastcall KoopalingBase__vf380(int a1)
{
  return (FIELD_U8(a1, 7176) >> 1) & 1;
}
