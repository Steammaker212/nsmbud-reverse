/* sub_6099D7EC
 * address: 0x6099D7EC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6099D7EC(float a1, int a2, float *a3)
{
  float v4; // s0

  v4 = sinf((float)(*a3 * a1) * 6.2832);
  return (float)(v4 * v4) * a3[1];
}
