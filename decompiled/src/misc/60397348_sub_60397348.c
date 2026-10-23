/* sub_60397348
 * address: 0x60397348   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60397348(int a1)
{
  float result; // s0

  LODWORD(result) = (int)(float)((float)(2147500000.0 * (float)((float)1 * 60.0)) / 180.0);
  FIELD_F32(a1, 160) = result;
  return result;
}
