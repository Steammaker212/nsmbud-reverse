/* sub_607FF880
 * address: 0x607FF880   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_607FF880(float *result)
{
  float v1; // s0
  float v2; // s2
  float v3; // s0
  float v4; // s2

  v1 = result[11];
  v2 = result[12];
  if ( v1 > v2 )
  {
    result[11] = v2;
    result[12] = v1;
  }
  v3 = result[13];
  v4 = result[14];
  if ( v3 > v4 )
  {
    result[13] = v4;
    result[14] = v3;
  }
  return result;
}
