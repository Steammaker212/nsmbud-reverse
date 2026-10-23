/* sub_6075DCC0
 * address: 0x6075DCC0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6075DCC0(int a1, unsigned int a2, float a3)
{
  float *result; // r0

  if ( a2 >= 7 )
    a2 = 0;
  result = (float *)(a1 + 4 * a2 + 1124);
  *result = a3;
  return result;
}
