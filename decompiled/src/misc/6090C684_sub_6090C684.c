/* sub_6090C684
 * address: 0x6090C684   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090C684(float *a1)
{
  float v1; // s4

  v1 = (float)((float)(a1[37] + a1[37]) * a1[42]) * a1[43];
  return (float)(v1 * -0.5) + (float)(a1[44] * v1);
}
