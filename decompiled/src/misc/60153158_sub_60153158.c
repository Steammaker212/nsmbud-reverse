/* sub_60153158
 * address: 0x60153158   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60153158(float *a1, float *a2, float *a3)
{
  float result; // s0

  result = (float)(*a1 + a1[1]) * 0.5;
  if ( a2 )
    *a2 = *a1 - result;
  if ( a3 )
  {
    result = a1[1] - result;
    *a3 = result;
  }
  return result;
}
