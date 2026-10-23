/* KoopalingBase__vf304
 * address: 0x600A10FC   size: 20   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026780
// 
// Overridden by: None
int __fastcall KoopalingBase__vf304(int a1)
{
  return Animation_update(**(_DWORD **)(FIELD_U32(a1, 7096) + 28));
}
