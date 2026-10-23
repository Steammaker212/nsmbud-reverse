/* sub_6090E680
 * address: 0x6090E680   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090E680(int a1, float *a2, float *a3)
{
  float v3; // r3
  float v4; // r12
  float v5; // s4
  float v6; // s6
  float v7; // s8
  float v8; // s6
  float v9; // s4
  float v10; // s0
  float v11; // s2
  float v12; // s0
  float v13; // s2
  float result; // s0

  v3 = FIELD_F32(a1, 4);
  *a2 = v3;
  v4 = FIELD_F32(a1, 8);
  a2[1] = v4;
  switch ( FIELD_U32(a1, 20) )
  {
    case 1:
      v5 = FIELD_F32(a1, 4);
      v6 = FIELD_F32(a1, 12);
      v7 = a3[2];
      *a2 = v4;
      v8 = (float)(v7 - (float)(v6 - v5)) - v3;
      v9 = v4;
      goto LABEL_8;
    case 2:
      v8 = v3;
      v9 = (float)(a3[1] - (float)(FIELD_F32(a1, 16) - FIELD_F32(a1, 8))) - v4;
      *a2 = v9;
      goto LABEL_8;
    case 3:
      v9 = (float)(a3[1] - (float)(FIELD_F32(a1, 12) - FIELD_F32(a1, 4))) - v3;
      v8 = (float)(a3[2] - (float)(FIELD_F32(a1, 16) - FIELD_F32(a1, 8))) - v4;
      *a2 = v9;
      goto LABEL_8;
    case 4:
      v8 = v4;
      v9 = (float)(a3[1] - (float)(FIELD_F32(a1, 12) - FIELD_F32(a1, 4))) - v3;
      *a2 = v9;
      goto LABEL_8;
    case 5:
      v8 = (float)(a3[2] - (float)(FIELD_F32(a1, 16) - FIELD_F32(a1, 8))) - v4;
      v9 = v3;
LABEL_8:
      a2[1] = v8;
      break;
    default:
      v8 = v4;
      v9 = v3;
      break;
  }
  v10 = v9 / a3[1];
  *a2 = v10;
  v11 = v8 / a3[2];
  a2[1] = v11;
  v12 = v10 * (float)(a3[5] - a3[3]);
  *a2 = v12;
  v13 = v11 * (float)(a3[6] - a3[4]);
  a2[1] = v13;
  *a2 = v12 + a3[3];
  result = v13 + a3[4];
  a2[1] = result;
  return result;
}
