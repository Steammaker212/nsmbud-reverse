/* sub_6079D1C0
 * address: 0x6079D1C0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6079D1C0(_DWORD *result)
{
  int v1; // r1

  result[306] &= ~0x400000u;
  v1 = result[305];
  result[308] &= ~0x40000000u;
  result[309] &= ~0x10000u;
  result[305] = v1 & 0xDFEFFFFF;
  result[39] = 0;
  result[36] = 1065353216;
  result[37] = 1065353216;
  result[38] = 1065353216;
  result[302] &= ~2u;
  return result;
}
