/* KoopalingBase__vf274
 * address: 0x600B747C   size: 52   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260F4
// 
// Overridden by: None
int __fastcall KoopalingBase__vf274(_WORD *a1)
{
  if ( a1[3138] )
    (*(void (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 1252))(a1);
  return BossBase__vf274((int)a1);
}
