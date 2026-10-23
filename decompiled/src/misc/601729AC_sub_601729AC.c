/* sub_601729AC
 * address: 0x601729AC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601729AC(float *a1, float a2, float a3, float a4)
{
  float v4; // s8
  float v5; // s4

  a1[147] = a2;
  a1[148] = a3;
  a1[149] = a4;
  v4 = a1[3];
  v5 = a1[2] + a3;
  a1[97] = a1[1] + a2;
  a1[98] = v5;
  a1[99] = v4 + a4;
  return v4 + a4;
}
