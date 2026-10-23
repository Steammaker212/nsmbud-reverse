/* sub_60373CE4
 * address: 0x60373CE4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60373CE4(Enemy *a1)
{
  float result; // s0

  Enemy__beginState_DieFall(a1);
  result = (float)byte_60AFE3F4[FIELD_U32(a1, 0x17F0)] * 0.5;
  FIELD_U32(a1, 0x0)._._.speed.x = result;
  return result;
}
