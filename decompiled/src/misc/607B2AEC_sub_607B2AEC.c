/* sub_607B2AEC
 * address: 0x607B2AEC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607B2AEC(_DWORD *result)
{
  int v1; // r3
  unsigned int v2; // r1

  result[39] = 0;
  v1 = result[306];
  v2 = result[301] & 0xEDFFFFFF;
  result[305] &= ~0x100000u;
  result[301] = v2;
  result[306] = v1 & 0xFFFF783B;
  return result;
}
