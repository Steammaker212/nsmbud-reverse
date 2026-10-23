/* sub_6090F22C
 * address: 0x6090F22C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6090F22C(float *a1, float *a2, float *a3)
{
  float v3; // s0
  float v4; // s14
  float v5; // s4
  float v6; // s1
  float v7; // s5
  float v8; // s0
  float v9; // s2
  signed int result; // r0
  float v11; // s0

  v3 = a1[1];
  v4 = a2[1];
  v5 = a1[2];
  v6 = a2[2];
  v7 = (float)((float)(v3 * v4) + (float)(*a1 * *a2)) + (float)(v5 * v6);
  v8 = (float)((float)((float)(a1[4] - v3) * v4) + (float)((float)(a1[3] - *a1) * *a2))
     + (float)((float)(a1[5] - v5) * v6);
  v9 = v7 - a2[3];
  if ( v8 == 0.0 )
  {
    if ( v9 == -0.0 )
    {
      result = 3;
      if ( a3 )
        *a3 = 0.0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = 0;
    v11 = (float)-v9 / v8;
    if ( v11 >= 0.0 && v11 <= 1.0 )
    {
      result = 1;
      if ( a3 )
        *a3 = v11;
    }
  }
  return result;
}
