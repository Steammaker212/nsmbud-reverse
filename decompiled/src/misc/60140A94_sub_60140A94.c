/* sub_60140A94
 * address: 0x60140A94   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60140A94(float *result)
{
  unsigned int v1; // r1
  float v2; // s2
  float v3; // s0
  float v4; // s2

  v1 = *((_DWORD *)result + 1686);
  if ( v1 >= 4 )
    v1 = 0;
  v2 = **(float **)(dword_60CBF354 + 4 * v1 + 48);
  if ( v2 <= 0.75 )
  {
    if ( v2 >= -0.75 )
      v3 = v2 * 1.05;
    else
      v3 = (float)((float)(v2 + 0.75) * 0.6) + -0.7875;
  }
  else
  {
    v3 = (float)((float)(v2 + -0.75) * 0.6) + 0.7875;
  }
  result[30] = 3.0;
  result[33] = 1.5;
  if ( *((_DWORD *)result + 20) == 1 )
  {
    v4 = -3.0;
    result[30] = -3.0;
    result[33] = -1.5;
  }
  else
  {
    v4 = 3.0;
  }
  result[30] = v3 + v4;
  result[31] = 3.7;
  result[25] = -0.15;
  result[24] = -3.0;
  result[34] = -3.0;
  result[26] = 0.04;
  return result;
}
