/* sub_6092A38C
 * address: 0x6092A38C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092A38C(int result, float *a2, unsigned int a3)
{
  float v3; // s10
  float v4; // s8
  float v5; // s12
  float *v6; // r4
  float v7; // s6
  float v8; // s10
  float v9; // s8
  float *v10; // r4
  float *v11; // r4
  float v12; // s0
  float v13; // s0

  v3 = FIELD_F32(result, 300);
  v4 = FIELD_F32(result, 296);
  v5 = FIELD_F32(result, 304);
  v6 = *(float **)(result + 368);
  if ( FIELD_U32(result, 364) > a3 )
    v6 += 3 * a3;
  *v6 = a2[3] + (float)((float)((float)(v3 * a2[1]) + (float)(v4 * *a2)) + (float)(v5 * a2[2]));
  v6[1] = a2[7] + (float)((float)((float)(v3 * a2[5]) + (float)(v4 * a2[4])) + (float)(v5 * a2[6]));
  v6[2] = a2[11] + (float)((float)((float)(v3 * a2[9]) + (float)(v4 * a2[8])) + (float)(v5 * a2[10]));
  v7 = FIELD_F32(result, 276);
  v8 = FIELD_F32(result, 272);
  v9 = FIELD_F32(result, 280);
  v10 = *(float **)(result + 360);
  if ( FIELD_U32(result, 356) > a3 )
    v10 += 3 * a3;
  *v10 = (float)((float)(v7 * a2[1]) + (float)(v8 * *a2)) + (float)(v9 * a2[2]);
  v10[1] = (float)((float)(v7 * a2[5]) + (float)(v8 * a2[4])) + (float)(v9 * a2[6]);
  v10[2] = (float)((float)(v7 * a2[9]) + (float)(v8 * a2[8])) + (float)(v9 * a2[10]);
  v11 = *(float **)(result + 360);
  if ( FIELD_U32(result, 356) > a3 )
    v11 += 3 * a3;
  v12 = sqrtf((float)((float)(v11[1] * v11[1]) + (float)(*v11 * *v11)) + (float)(v11[2] * v11[2]));
  if ( v12 > 0.0 )
  {
    v13 = 1.0 / v12;
    *v11 = v13 * *v11;
    v11[1] = v13 * v11[1];
    v11[2] = v13 * v11[2];
  }
  return result;
}
