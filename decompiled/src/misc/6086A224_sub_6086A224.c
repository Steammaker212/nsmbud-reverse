/* sub_6086A224
 * address: 0x6086A224   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6086A224(float result, float a2, float a3)
{
  float v3; // s0
  float v4; // s4
  float v5; // s6
  float v6; // s2

  if ( result >= a3 )
  {
    v4 = 1.0;
    v3 = result - a3;
    v5 = a2;
  }
  else
  {
    if ( result >= a2 )
      return result;
    v3 = a2 - result;
    v4 = -1.0;
    v5 = a3;
  }
  v6 = a3 - a2;
  if ( v6 != 0.0 )
    return v5 + (float)(v4 * (float)(v3 - (float)(v6 * (float)(int)(float)(v3 / v6))));
  return a2;
}
