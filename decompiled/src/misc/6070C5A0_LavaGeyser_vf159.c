/* LavaGeyser_vf159
 * address: 0x6070C5A0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall LavaGeyser_vf159(int a1)
{
  float v1; // s0
  float v2; // s2
  float v3; // s4
  float v4; // s6
  float v5; // s4
  float v6; // s2
  float v7; // s0
  float v8; // s8
  float *result; // r0

  v1 = FIELD_F32(a1, 148);
  v2 = FIELD_F32(a1, 6308);
  v3 = FIELD_F32(a1, 6340);
  FIELD_U32(a1, 304) = 0;
  v4 = (float)(v1 * -12.0) + (float)((float)(v3 * v2) * 0.5);
  FIELD_F32(a1, 308) = v4;
  v5 = FIELD_F32(a1, 6304);
  FIELD_F32(a1, 312) = v5 * 0.4;
  v6 = v1 * 6.0;
  FIELD_F32(a1, 316) = v4;
  FIELD_U32(a1, 6520) = 0;
  v7 = v1 * 5.0;
  v8 = (float)(v4 + v4) + v6;
  FIELD_F32(a1, 6524) = v8;
  FIELD_F32(a1, 6528) = v5 * 0.35;
  FIELD_F32(a1, 6532) = v6;
  FIELD_U32(a1, 6824) = 0;
  FIELD_F32(a1, 6828) = v8 + v7;
  FIELD_F32(a1, 6832) = v5 * 0.3;
  result = (float *)(a1 + 6836);
  *result = v7;
  return result;
}
