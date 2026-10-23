/* SE_AMB_WATERPILLAR_SPOUT_ref_3_helper
 * address: 0x606F69A0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall SE_AMB_WATERPILLAR_SPOUT_ref_3_helper(float *result)
{
  float *v1; // r1
  float v2; // s0
  float v3; // s2
  float v4; // s2
  float v5; // s2

  v1 = result + 1625;
  v2 = result[1627];
  v3 = result[1625];
  if ( v3 >= v2 )
  {
    if ( v3 > v2 )
    {
      result += 1626;
      v5 = v3 - *result;
      *v1 = v5;
      if ( v5 < v2 )
        *v1 = v2;
    }
  }
  else
  {
    result += 1626;
    v4 = v3 + *result;
    *v1 = v4;
    if ( v4 > v2 )
      *v1 = v2;
  }
  return result;
}
