/* sub_6019B64C
 * address: 0x6019B64C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019B64C(float *a1, float *a2)
{
  float v2; // s2
  float v3; // s0
  float v4; // s8
  float v5; // s6
  int result; // r0
  float v7; // s2
  float v8; // s0

  v2 = *a1 - *a2;
  v3 = a1[2] - a2[2];
  v4 = fabsf(v2);
  v5 = fabsf(v3);
  if ( v4 < 3.0 )
  {
    v7 = a1[1];
    result = 6;
    v8 = v7 - a2[1];
    if ( fabsf(v8) > 3.0 )
      return v8 > 0.0;
  }
  else if ( v4 <= v5 )
  {
    result = 2;
    if ( v3 > 0.0 )
      return 3;
  }
  else
  {
    result = 5;
    if ( v2 > 0.0 )
      return 4;
  }
  return result;
}
