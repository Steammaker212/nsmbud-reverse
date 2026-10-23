/* sub_6067DBD0
 * address: 0x6067DBD0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6067DBD0(int a1, float *a2)
{
  unsigned int v2; // r2
  float v3; // s2
  float *v4; // r2
  float v5; // s0
  float v6; // s2
  float result; // s0

  v2 = FIELD_U32(a1, 320);
  v3 = (float)(v2 & 0xFFFFFF);
  v4 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v5 = (float)(*v4 + (float)(v4[1] * (float)(v3 * 0.000000059605))) * -8.0;
  v6 = (float)(v4[2] + (float)((float)(v3 * 0.000000059605) * v4[3])) * 8.0;
  *a2 = v5;
  a2[1] = v6;
  *a2 = v5 + FIELD_F32(a1, 308);
  result = FIELD_F32(a1, 312) + v6;
  a2[1] = result;
  return result;
}
