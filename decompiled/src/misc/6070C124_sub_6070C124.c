/* sub_6070C124
 * address: 0x6070C124   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6070C124(float *result)
{
  float *v1; // r1
  float v2; // s0
  float v3; // s2
  float v4; // s2
  float v5; // s2

  v1 = result + 1579;
  v2 = result[1581];
  v3 = result[1579];
  if ( v3 >= v2 )
  {
    if ( v3 > v2 )
    {
      result += 1580;
      v5 = v3 - *result;
      *v1 = v5;
      if ( v5 < v2 )
        *v1 = v2;
    }
  }
  else
  {
    result += 1580;
    v4 = v3 + *result;
    *v1 = v4;
    if ( v4 > v2 )
      *v1 = v2;
  }
  return result;
}
