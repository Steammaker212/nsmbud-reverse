/* sub_60800A94
 * address: 0x60800A94   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60800A94(float *a1, int a2, float a3)
{
  float v5; // s16
  float *result; // r0

  v5 = 1.0 - (float)(1.0 / a3);
  result = (float *)sub_607FA36C(a2);
  if ( FIELD_U8(a2, 20) == 2 || (a1[7] = *result + (float)(v5 * (float)(a1[5] * -0.5)), FIELD_U8(a2, 20) != 1) )
    a1[8] = result[1] + (float)(v5 * (float)(a1[6] * 0.5));
  return result;
}
