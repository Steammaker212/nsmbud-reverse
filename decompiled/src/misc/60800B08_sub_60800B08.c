/* sub_60800B08
 * address: 0x60800B08   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60800B08(float *a1, float *a2, int a3)
{
  int result; // r0
  float v7; // s2
  float v8; // s4
  float v9; // s2
  float v10; // s6
  float v11; // s0
  float v12; // s8
  float v13; // s4
  float v14; // s2

  result = FIELD_U32(a3, 16);
  if ( result )
  {
    result = sub_60804324(a3, a1 + 4);
    v7 = a1[4];
    v8 = v7 * 398.22;
    v9 = v7 * 224.0;
    a1[5] = v8;
    a1[6] = v9;
    v10 = FIELD_F32(a3, 20) + (float)(v8 * -0.5);
    a1[7] = v10;
    v11 = FIELD_F32(a3, 24) + v9;
    a1[8] = v11;
    v12 = *a2;
    if ( v10 >= *a2 )
    {
      v13 = a2[2] - v8;
      v12 = v10;
      if ( v10 > v13 )
        v12 = v13;
    }
    a1[7] = v12;
    v14 = a2[1] + v9;
    if ( v11 >= v14 )
    {
      v14 = v11;
      if ( v11 > a2[3] )
        v14 = a2[3];
    }
    a1[8] = v14;
  }
  return result;
}
