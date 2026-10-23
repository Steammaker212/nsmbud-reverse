/* sub_609288F0
 * address: 0x609288F0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609288F0(int result, float *a2, unsigned int a3)
{
  float v3; // s6
  float v4; // s10
  float v5; // s8
  float *v6; // r3
  float *v7; // r4
  float v8; // s0
  float v9; // s0

  v3 = FIELD_F32(result, 260);
  v4 = FIELD_F32(result, 256);
  v5 = FIELD_F32(result, 264);
  v6 = *(float **)(result + 272);
  if ( FIELD_U32(result, 268) > a3 )
    v6 += 3 * a3;
  *v6 = (float)((float)(v3 * a2[1]) + (float)(v4 * *a2)) + (float)(v5 * a2[2]);
  v6[1] = (float)((float)(v3 * a2[5]) + (float)(v4 * a2[4])) + (float)(v5 * a2[6]);
  v6[2] = (float)((float)(v3 * a2[9]) + (float)(v4 * a2[8])) + (float)(v5 * a2[10]);
  v7 = *(float **)(result + 272);
  if ( FIELD_U32(result, 268) > a3 )
    v7 += 3 * a3;
  v8 = sqrtf((float)((float)(v7[1] * v7[1]) + (float)(*v7 * *v7)) + (float)(v7[2] * v7[2]));
  if ( v8 > 0.0 )
  {
    v9 = 1.0 / v8;
    *v7 = v9 * *v7;
    v7[1] = v9 * v7[1];
    v7[2] = v9 * v7[2];
  }
  return result;
}
