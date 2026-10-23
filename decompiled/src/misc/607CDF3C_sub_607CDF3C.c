/* sub_607CDF3C
 * address: 0x607CDF3C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607CDF3C(int a1)
{
  int *result; // r0

  FIELD_U32(a1, 1216) |= 0x800000u;
  FIELD_U32(a1, 9640) = 10;
  result = (int *)sub_607D6C28(a1);
  if ( result )
  {
    if ( (FIELD_U8(a1, 1207) & 2) == 0 || !result[2407] )
      FIELD_U32(a1, 9636) = 4;
    return face_1_ref_766074((int)result);
  }
  return result;
}
