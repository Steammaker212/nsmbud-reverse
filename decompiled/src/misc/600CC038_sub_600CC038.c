/* sub_600CC038
 * address: 0x600CC038   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600CC038(int a1)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s4
  float v4; // s6
  float v5; // s8
  float v6; // s10
  float v7; // s0
  float v8; // s4
  float result; // s0

  v1 = FIELD_U32(a1, 164);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  FIELD_U32(a1, 128) = 0;
  v7 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v8 = v3 + (float)(v4 * v7);
  result = (float)(v5 + (float)(v7 * v6)) * 1.2;
  FIELD_F32(a1, 120) = result;
  FIELD_F32(a1, 124) = v8 * 1.2;
  return result;
}
