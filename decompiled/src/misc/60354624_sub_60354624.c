/* sub_60354624
 * address: 0x60354624   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60354624(int a1)
{
  float result; // s0

  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 124) = -1086324736;
  sub_60355C1C(a1, 2);
  FIELD_U8(a1, 6460) = 0;
  FIELD_U32(a1, 6588) = 1101529088;
  result = (float)(*(float *)&dword_60AF1F60[FIELD_U32(a1, 80)] * -4.0) + 0.0;
  FIELD_F32(a1, 6580) = result;
  return result;
}
