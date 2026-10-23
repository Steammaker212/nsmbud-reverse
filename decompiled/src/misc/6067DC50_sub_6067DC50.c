/* sub_6067DC50
 * address: 0x6067DC50   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6067DC50(int a1, float *a2)
{
  unsigned int v2; // r2
  int v3; // lr
  float v4; // s2
  float v5; // s8
  float v6; // s2
  float v7; // s2
  float v8; // s4
  unsigned int v9; // r0
  float *v10; // r2
  float result; // s0
  float v12; // s4

  v2 = FIELD_U32(a1, 320);
  v3 = (v2 >> 20) & 0xFF0;
  v4 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v5 = *(float *)((char *)&sinLutTable[2] + v3) + (float)(v4 * *(float *)((char *)&sinLutTable[3] + v3));
  v6 = (float)(*(float *)((char *)sinLutTable + v3) + (float)(*(float *)((char *)&sinLutTable[1] + v3) * v4)) * -8.0;
  *a2 = v6;
  a2[1] = v5 * 8.0;
  v7 = v6 + FIELD_F32(a1, 308);
  *a2 = v7;
  v8 = (float)(v5 * 8.0) + FIELD_F32(a1, 312);
  a2[1] = v8;
  v9 = FIELD_U32(a1, 320);
  v10 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  result = (float)(v9 & 0xFFFFFF) * 0.000000059605;
  v12 = v8 + (float)((float)(*v10 + (float)(v10[1] * result)) * 20.0);
  *a2 = v7 + (float)((float)(v10[2] + (float)(result * v10[3])) * 20.0);
  a2[1] = v12;
  return result;
}
