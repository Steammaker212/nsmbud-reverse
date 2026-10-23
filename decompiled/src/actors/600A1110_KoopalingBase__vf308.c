/* KoopalingBase__vf308
 * address: 0x600A1110   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026784
// 
// Overridden by: None
_DWORD *__fastcall KoopalingBase__vf308(int a1)
{
  _DWORD *result; // r0
  int v2; // t1
  int v3; // r1

  v2 = FIELD_U32(a1, 7096);
  result = (_DWORD *)(a1 + 7096);
  v3 = **(_DWORD **)(v2 + 28);
  if ( v3 )
  {
    FIELD_U32(v3, 20) = 0;
    FIELD_U32(v3, 28) |= 2u;
    result = **(_DWORD ***)(*result + 28);
    result[6] = 0;
  }
  return result;
}
