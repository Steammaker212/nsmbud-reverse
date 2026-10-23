/* sub_6080699C
 * address: 0x6080699C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6080699C(int a1)
{
  int v1; // r0
  float v2; // s0
  float v3; // s8
  float v4; // s2
  float result; // s0

  v1 = sub_608A8DF4(a1);
  v2 = nn__util__FloatPi;
  *(_DWORD *)v1 = &off_60C280AC;
  FIELD_U32(v1, 32) = 0;
  v3 = v2 + v2;
  v4 = v2 * 0.25;
  result = v2 / 6.0;
  FIELD_F32(v1, 20) = v4;
  FIELD_F32(v1, 24) = result;
  FIELD_F32(v1, 28) = v3 / 3.0;
  return result;
}
