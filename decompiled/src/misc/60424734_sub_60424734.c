/* sub_60424734
 * address: 0x60424734   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60424734(
        int a1,
        float *a2,
        unsigned int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        _DWORD *a9,
        int a10,
        int a11)
{
  float *v11; // r4
  float v12; // s4
  float v13; // s14
  float v14; // s10
  float v15; // s12
  float v16; // s5
  float v17; // s7
  float v18; // s11
  float v19; // s13
  float v20; // s15
  float v21; // s12
  int v22; // r4
  int v23; // r1
  int v24; // r2
  float result; // s0

  v11 = (float *)((char *)sinLutTable + ((a3 >> 20) & 0xFF0));
  v12 = (float)(a3 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(-0.00030118 * 0.0) + 1.0;
  v14 = (float)(0.024541 * 0.0) + 0.0;
  v15 = FIELD_F32(a1, 4);
  v16 = FIELD_F32(a1, 8);
  v17 = *v11 + (float)(v12 * v11[1]);
  v18 = v11[2] + (float)(v12 * v11[3]);
  v19 = (float)((float)(v15 * (float)((float)((float)(v14 * v14) * v18) - (float)(v13 * v17)))
              + (float)(*(float *)a1 * (float)(v13 * v18)))
      + (float)(v16 * (float)((float)(v14 * (float)(v13 * v18)) + (float)(v14 * v17)));
  v20 = (float)((float)(v15 * (float)((float)(v13 * v18) + (float)((float)(v14 * v14) * v17)))
              + (float)(*(float *)a1 * (float)(v13 * v17)))
      + (float)(v16 * (float)((float)(v14 * (float)(v13 * v17)) - (float)(v14 * v18)));
  v21 = (float)((float)((float)(v14 * v13) * v15) - (float)(v14 * *(float *)a1)) + (float)((float)(v13 * v13) * v16);
  *(float *)a1 = v19;
  FIELD_F32(a1, 4) = v20;
  FIELD_F32(a1, 8) = v21;
  *(float *)a1 = *a2 + v19;
  FIELD_F32(a1, 4) = a2[1] + v20;
  FIELD_U32(a1, 48) += a3;
  FIELD_F32(a1, 32) = FIELD_F32(a1, 32) * a5;
  if ( a4 == 1 )
  {
    v22 = a9[1];
    v23 = a9[2];
    v24 = a9[3];
    FIELD_U32(a1, 12) = *a9;
    FIELD_U32(a1, 16) = v22;
    FIELD_U32(a1, 20) = v23;
    FIELD_U32(a1, 24) = v24;
  }
  if ( a10 == 1 )
    FIELD_U32(a1, 44) = a11;
  FIELD_F32(a1, 64) = a6;
  result = (float)(FIELD_F32(a1, 24) * a7) * a8;
  FIELD_F32(a1, 24) = result;
  return result;
}
