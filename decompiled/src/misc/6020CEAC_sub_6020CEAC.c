/* sub_6020CEAC
 * address: 0x6020CEAC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6020CEAC(int a1)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s0
  float v4; // s8
  float result; // s0

  FIELD_U32(a1, 200) = 1092616192;
  v1 = FIELD_U32(a1, 192);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v4 = v2[2] + (float)(v3 * v2[3]);
  result = (float)(*v2 + (float)(v2[1] * v3)) * 10.0;
  FIELD_F32(a1, 116) = result;
  FIELD_F32(a1, 124) = v4 * 10.0;
  FIELD_U32(a1, 440) = 13;
  return result;
}
