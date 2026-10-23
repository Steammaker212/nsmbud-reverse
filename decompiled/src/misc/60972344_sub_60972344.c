/* sub_60972344
 * address: 0x60972344   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60972344(_BYTE *a1, int a2)
{
  int result; // r0

  *a1 = sub_60920DE8(a2, 0);
  a1[1] = sub_60920DE8(a2, 1);
  a1[2] = sub_60920DE8(a2, 2);
  result = sub_60920DE8(a2, 3);
  a1[3] = result;
  return result;
}
