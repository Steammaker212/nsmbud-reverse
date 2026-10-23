/* sub_608A8DF4
 * address: 0x608A8DF4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608A8DF4(int a1)
{
  float v1; // s0
  float v2; // s8
  float v3; // s2
  float result; // s0

  v1 = nn__util__FloatPi;
  *(_DWORD *)a1 = &off_60C5AD34;
  FIELD_U32(a1, 16) = 0;
  v2 = v1 + v1;
  v3 = v1 * 0.25;
  result = v1 / 6.0;
  FIELD_F32(a1, 4) = v3;
  FIELD_F32(a1, 8) = result;
  FIELD_F32(a1, 12) = v2 / 3.0;
  return result;
}
