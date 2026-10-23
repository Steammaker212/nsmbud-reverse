/* sub_60929B04
 * address: 0x60929B04   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60929B04(int a1, float *a2, unsigned int a3)
{
  float v3; // s8
  float v4; // s12
  float v5; // s10
  float *v6; // r3
  float result; // s0

  v3 = FIELD_F32(a1, 244);
  v4 = FIELD_F32(a1, 240);
  v5 = FIELD_F32(a1, 248);
  v6 = *(float **)(a1 + 304);
  if ( FIELD_U32(a1, 300) > a3 )
    v6 += 3 * a3;
  *v6 = a2[3] + (float)((float)((float)(v3 * a2[1]) + (float)(v4 * *a2)) + (float)(v5 * a2[2]));
  v6[1] = a2[7] + (float)((float)((float)(v3 * a2[5]) + (float)(v4 * a2[4])) + (float)(v5 * a2[6]));
  result = a2[11] + (float)((float)((float)(v3 * a2[9]) + (float)(v4 * a2[8])) + (float)(v5 * a2[10]));
  v6[2] = result;
  return result;
}
