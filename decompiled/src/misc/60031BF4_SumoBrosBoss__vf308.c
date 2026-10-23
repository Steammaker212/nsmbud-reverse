/* SumoBrosBoss__vf308
 * address: 0x60031BF4   size: 48   group: misc
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
_DWORD *__fastcall SumoBrosBoss__vf308(int a1)
{
  _DWORD *result; // r0
  int v2; // r1
  int v3; // t1

  v3 = FIELD_U32(a1, 7104);
  result = (_DWORD *)(a1 + 7104);
  v2 = v3;
  if ( v3 )
  {
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 28) |= 2u;
    result = (_DWORD *)*result;
    result[6] = 0;
  }
  return result;
}
