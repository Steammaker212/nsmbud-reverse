/* sub_6090E7FC
 * address: 0x6090E7FC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090E7FC(int a1, float *a2, float *a3)
{
  float v3; // s2
  float v4; // s0
  float v5; // s4
  float v6; // s0
  float v7; // s2
  float result; // s0

  v3 = FIELD_F32(a1, 12) - FIELD_F32(a1, 4);
  v4 = FIELD_F32(a1, 16) - FIELD_F32(a1, 8);
  *a2 = v3;
  a2[1] = v4;
  if ( (unsigned int)(FIELD_U32(a1, 20) - 1) > 1 )
  {
    v5 = v4;
    v4 = v3;
  }
  else
  {
    v5 = v3;
    *a2 = v4;
    a2[1] = v3;
  }
  v6 = v4 / a3[1];
  *a2 = v6;
  v7 = v5 / a3[2];
  a2[1] = v7;
  *a2 = v6 * (float)(a3[5] - a3[3]);
  result = v7 * (float)(a3[6] - a3[4]);
  a2[1] = result;
  return result;
}
