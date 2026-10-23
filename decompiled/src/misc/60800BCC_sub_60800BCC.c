/* sub_60800BCC
 * address: 0x60800BCC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60800BCC(int a1, _DWORD *a2, float *a3)
{
  float v3; // s2
  float v4; // s4
  float v5; // s6
  float result; // s0

  *a2 = FIELD_U32(a1, 16);
  v3 = FIELD_F32(a1, 24);
  v4 = FIELD_F32(a1, 28);
  v5 = FIELD_F32(a1, 32) - v3;
  result = v4 + FIELD_F32(a1, 20);
  *a3 = v4;
  a3[1] = v5;
  a3[2] = result;
  a3[3] = v3 + v5;
  return result;
}
