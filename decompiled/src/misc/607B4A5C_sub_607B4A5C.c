/* sub_607B4A5C
 * address: 0x607B4A5C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607B4A5C(_DWORD *result)
{
  int v1; // r3
  unsigned int v2; // r1

  result[303] &= ~0x400u;
  v1 = result[306];
  v2 = result[304] & 0xFFFFFF2F;
  result[305] &= ~0x100000u;
  result[306] = v1 & 0xF7FF7BFF;
  result[304] = v2;
  result[2849] = 0;
  result[39] = 0;
  result[3103] = 10;
  return result;
}
