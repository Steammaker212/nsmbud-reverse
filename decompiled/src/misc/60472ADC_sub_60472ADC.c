/* sub_60472ADC
 * address: 0x60472ADC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60472ADC(int a1)
{
  float *v1; // r4
  float result; // s0

  if ( FIELD_U32(a1, 3296) )
  {
    v1 = (float *)(a1 + 3288);
    sub_60472B20(FIELD_F32(a1, 3288), FIELD_F32(a1, 3288) + 1.0);
    result = *v1 + 1.0;
    *v1 = result;
  }
  return result;
}
