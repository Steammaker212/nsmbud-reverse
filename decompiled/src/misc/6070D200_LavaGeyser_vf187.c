/* LavaGeyser_vf187
 * address: 0x6070D200   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall LavaGeyser_vf187(int a1)
{
  float result; // s0

  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6320) = FIELD_U32(a1, 6372);
  result = -FIELD_F32(a1, 6368);
  FIELD_F32(a1, 6324) = result;
  return result;
}
