/* sub_60471290
 * address: 0x60471290   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60471290(_DWORD *a1)
{
  int result; // r0

  a1[31] = 1080033280;
  a1[25] = -1107967345;
  a1[33] = 0;
  a1[34] = -1065353216;
  a1[35] = 0;
  a1[1529] = 0;
  result = **(_DWORD **)(a1[1526] + 12);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
