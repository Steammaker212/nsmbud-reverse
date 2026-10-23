/* sub_60623140
 * address: 0x60623140   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60623140(Enemy *a1)
{
  float result; // s0

  Enemy__beginState_DieFall(a1);
  result = FIELD_U32(a1, 0x0)._._.speed.y * 0.5;
  FIELD_U32(a1, 0x0)._._.speed.y = result;
  return result;
}
