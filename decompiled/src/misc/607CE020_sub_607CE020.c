/* sub_607CE020
 * address: 0x607CE020   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607CE020(int a1, int a2)
{
  float v2; // s0
  float v3; // s2
  int v4; // r2
  float result; // s0

  v2 = FIELD_F32(a1, 576);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  *(_DWORD *)a2 = FIELD_U32(a1, 108);
  result = (float)(v3 + v2) + 4.0;
  FIELD_F32(a2, 4) = result;
  FIELD_U32(a2, 8) = v4;
  return result;
}
