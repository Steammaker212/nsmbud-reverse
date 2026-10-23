/* sub_607AEC28
 * address: 0x607AEC28   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607AEC28(_DWORD *a1)
{
  unsigned int result; // r0

  sub_6076FC00(a1);
  a1[3018] = 0;
  result = a1[306] & 0xFDFFFFFB | 4;
  a1[306] = result;
  return result;
}
