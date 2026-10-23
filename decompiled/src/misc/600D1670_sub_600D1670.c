/* sub_600D1670
 * address: 0x600D1670   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D1670(int a1, float *a2)
{
  float v2; // s18
  float v3; // s24
  float v4; // s16
  float v5; // s22
  float v6; // s20
  float v7; // s26
  float v8; // s17
  float v9; // s30
  float v10; // s28
  float v11; // s2
  float v12; // s0
  float v13; // s0
  float v14; // s0
  float v15; // s0

  v2 = a2[1];
  v3 = *a2;
  v4 = a2[2];
  v5 = a2[5];
  v6 = a2[6];
  v7 = a2[4];
  v8 = a2[8];
  v9 = a2[9];
  v10 = a2[10];
  v11 = sqrtf((float)((float)(v2 * v2) + (float)(v3 * v3)) + (float)(v4 * v4));
  if ( v11 > 0.0 )
  {
    v4 = v4 * (float)(1.0 / v11);
    v2 = v2 * (float)(1.0 / v11);
    v3 = v3 * (float)(1.0 / v11);
  }
  v12 = sqrtf((float)((float)(v5 * v5) + (float)(v7 * v7)) + (float)(v6 * v6));
  if ( v12 > 0.0 )
  {
    v13 = 1.0 / v12;
    v6 = v6 * v13;
    v5 = v5 * v13;
    v7 = v7 * v13;
  }
  v14 = sqrtf((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  if ( v14 > 0.0 )
  {
    v15 = 1.0 / v14;
    v10 = v10 * v15;
    v9 = v9 * v15;
    v8 = v8 * v15;
  }
  *a2 = v3;
  a2[1] = v2;
  a2[2] = v4;
  a2[4] = v7;
  a2[5] = v5;
  a2[6] = v6;
  a2[8] = v8;
  a2[9] = v9;
  a2[10] = v10;
}
