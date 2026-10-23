/* sub_607A2628
 * address: 0x607A2628   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607A2628(float *a1, int a2, float a3, float a4)
{
  float result; // s0

  Player_changeState((int)a1, (StateBase *)&dword_60CC4BBC, 1);
  a1[31] = a4;
  result = flt_60B0A898[a2] * a3;
  a1[22] = result;
  a1[23] = a3;
  return result;
}
