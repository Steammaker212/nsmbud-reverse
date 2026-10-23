/* sub_607F177C
 * address: 0x607F177C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_607F177C(int a1)
{
  float v1; // s2
  float v2; // s4
  float v3; // s6
  float v4; // s8
  float v5; // s10
  float v6; // s12
  float *v7; // r1
  float *result; // r0

  v1 = FIELD_F32(a1, 552);
  v2 = FIELD_F32(a1, 556);
  v3 = FIELD_F32(a1, 560);
  v4 = FIELD_F32(a1, 564);
  v5 = FIELD_F32(a1, 568);
  v6 = FIELD_F32(a1, 572);
  FIELD_U32(a1, 1460) = 30;
  FIELD_F32(a1, 1032) = (float)(0.0 - v1) / 30.0;
  FIELD_F32(a1, 1036) = (float)(0.0 - v2) / 30.0;
  FIELD_F32(a1, 1040) = (float)(2280.0 - v3) / 30.0;
  FIELD_F32(a1, 1044) = (float)(0.0 - v4) / 30.0;
  v7 = (float *)(a1 + 1052);
  result = (float *)(a1 + 1048);
  *result = (float)(0.0 - v5) / 30.0;
  *v7 = (float)(-266.0 - v6) / 30.0;
  return result;
}
