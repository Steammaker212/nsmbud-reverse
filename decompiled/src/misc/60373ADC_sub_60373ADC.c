/* sub_60373ADC
 * address: 0x60373ADC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60373ADC(int a1)
{
  float result; // s0

  result = flt_60AF2754[FIELD_U32(a1, 11692)] * (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_F32(a1, 120) = result;
  return result;
}
