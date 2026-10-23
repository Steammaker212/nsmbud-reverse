/* sub_608A8A50
 * address: 0x608A8A50   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608A8A50(float *a1, float a2, int a3, float *a4)
{
  float v4; // s4
  float result; // s0

  v4 = a4[25];
  if ( v4 >= a2 )
  {
    *a1 = 0.0;
    return 0.0;
  }
  else
  {
    result = (float)((float)(a2 - v4) / a4[26]) * a4[28];
    if ( result > a4[29] )
      result = a4[29];
    *a1 = result;
  }
  return result;
}
