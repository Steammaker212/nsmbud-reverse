/* sub_6075DE94
 * address: 0x6075DE94   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6075DE94(int a1, float *a2, unsigned int a3)
{
  float *v3; // r0
  float result; // s0

  if ( a3 >= 4 )
    a3 = 0;
  v3 = *(float **)(a1 + 4 * a3 + 16);
  if ( v3 )
  {
    *a2 = v3[27] + v3[143];
    a2[1] = v3[28] + v3[144];
    result = v3[29] + v3[145];
    a2[2] = result;
  }
  else
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    return 0.0;
  }
  return result;
}
