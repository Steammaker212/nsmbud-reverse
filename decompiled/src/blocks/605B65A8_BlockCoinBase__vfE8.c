/* BlockCoinBase__vfE8
 * address: 0x605B65A8   size: 160   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
float *__fastcall BlockCoinBase__vfE8(float *result, int a2)
{
  float v2; // s0
  float *v3; // r1
  float v4; // s2
  float v5; // s0
  float v6; // s2
  float v7; // s0

  v2 = result[31];
  if ( a2 == 1 )
  {
    if ( v2 <= 0.0 )
    {
LABEL_7:
      v3 = result + 36;
      v6 = result[36] - result[1701];
      result[36] = v6;
      v7 = result[1700];
      if ( v6 <= v7 )
        *v3 = v7;
      goto LABEL_9;
    }
  }
  else if ( v2 >= 0.0 )
  {
    goto LABEL_7;
  }
  v3 = result + 36;
  v4 = result[1701] + result[36];
  result[36] = v4;
  v5 = result[1702];
  if ( v4 >= v5 )
    *v3 = v5;
LABEL_9:
  result[37] = *v3;
  return result;
}
