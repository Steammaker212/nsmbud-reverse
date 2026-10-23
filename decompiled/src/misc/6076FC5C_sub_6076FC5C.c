/* sub_6076FC5C
 * address: 0x6076FC5C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6076FC5C(_DWORD *result)
{
  int v1; // r2
  unsigned int v2; // r1

  result[24] = -1065353216;
  v1 = result[307];
  result[302] &= 0xFE70FFFF;
  v2 = result[306] & 0xFFFFFBDF;
  result[308] &= ~0x40000000u;
  result[309] &= ~0x10000u;
  result[307] = v1 & 0xFFEDBBFF;
  result[306] = v2;
  return result;
}
