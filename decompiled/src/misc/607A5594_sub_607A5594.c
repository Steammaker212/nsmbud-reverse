/* sub_607A5594
 * address: 0x607A5594   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607A5594(_DWORD *result)
{
  unsigned int v1; // r2

  v1 = result[306] & 0xFFEFFFFF;
  result[305] &= 0xFFFFFFBB;
  result[306] = v1;
  result[303] &= ~0x20u;
  result[307] &= ~0x1000000u;
  result[301] &= ~0x200u;
  result[305] &= ~0x40u;
  return result;
}
