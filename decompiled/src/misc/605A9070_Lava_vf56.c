/* Lava_vf56
 * address: 0x605A9070   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall Lava_vf56(int a1)
{
  float result; // s0

  result = FIELD_F32(a1, 112) - FIELD_F32(dword_60CC6484, 124);
  FIELD_F32(a1, 6832) = result;
  return result;
}
