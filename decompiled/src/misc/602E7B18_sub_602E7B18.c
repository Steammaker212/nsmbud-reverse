/* sub_602E7B18
 * address: 0x602E7B18   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602E7B18(_DWORD *result)
{
  unsigned int v1; // r2

  result[798] &= ~0x80000000;
  result[799] &= 0xFFFFFFFC;
  v1 = result[797] & 0xFFFFFFFC;
  result[795] &= 0xFFFFFFFC;
  result[797] = v1;
  result[801] &= 0xFFFFFFFC;
  return result;
}
