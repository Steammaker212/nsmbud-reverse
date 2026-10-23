/* sub_60113610
 * address: 0x60113610   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60113610(int a1)
{
  float *v1; // r0
  float result; // s0

  v1 = (float *)(a1 + 7252);
  result = *v1 + 1.0;
  *v1 = result;
  return result;
}
