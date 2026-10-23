/* sub_6076628C
 * address: 0x6076628C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6076628C(int a1, float *a2)
{
  float *v2; // r0
  float v3; // s4
  float result; // s0

  if ( a2 )
  {
    v2 = (float *)(a1 + 9632);
    v3 = *v2 + 1.0;
    result = 1.0 - *v2;
    *a2 = v3;
    a2[1] = result;
    a2[2] = v3;
  }
  return result;
}
