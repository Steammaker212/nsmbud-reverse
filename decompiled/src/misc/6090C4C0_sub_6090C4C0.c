/* sub_6090C4C0
 * address: 0x6090C4C0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090C4C0(float *a1, int a2)
{
  float v2; // s8
  float v3; // s0
  float v4; // s2
  float v5; // s4
  float v6; // s12
  float v7; // s4
  float v8; // s6
  float v9; // s4
  float v10; // s14
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s0
  float v15; // s2
  float v16; // s6
  float v17; // s0
  float v18; // s2
  float v19; // s0
  float result; // s0

  v2 = a1[45];
  v3 = a1[37] + a1[37];
  v4 = v3 * a1[42];
  v5 = v4 * a1[43];
  v6 = v5 * 0.5;
  v7 = v5 * a1[44];
  v8 = v7 - v6;
  v9 = v6 + v7;
  v10 = 1.0 / (float)(v9 - v8);
  *(float *)a2 = v3 * v10;
  FIELD_U32(a2, 4) = 0;
  FIELD_F32(a2, 8) = (float)(v9 + v8) * v10;
  v11 = v4 * 0.5;
  v12 = v4 * v2;
  FIELD_U32(a2, 12) = 0;
  FIELD_U32(a2, 16) = 0;
  v13 = v12 - v11;
  v14 = v11 + v12;
  v15 = a1[37];
  FIELD_U32(a2, 28) = 0;
  v16 = 1.0 / (float)(v14 - v13);
  FIELD_F32(a2, 20) = v16 * (float)(v15 + v15);
  FIELD_F32(a2, 24) = (float)(v14 + v13) * v16;
  v17 = a1[37];
  v18 = a1[38];
  FIELD_U32(a2, 32) = 0;
  FIELD_U32(a2, 36) = 0;
  v19 = 1.0 / (float)(v18 - v17);
  FIELD_F32(a2, 40) = -(float)(v19 * (float)(a1[38] + a1[37]));
  result = -(float)(v19 * (float)((float)(a1[38] + a1[38]) * a1[37]));
  FIELD_F32(a2, 44) = result;
  FIELD_U32(a2, 48) = 0;
  FIELD_U32(a2, 52) = 0;
  FIELD_U32(a2, 56) = -1082130432;
  FIELD_U32(a2, 60) = 0;
  return result;
}
