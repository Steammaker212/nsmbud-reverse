/* sub_6085F6A0
 * address: 0x6085F6A0   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6085F6A0(float *a1, int a2, float a3)
{
  float *v3; // r3
  float v4; // s2
  int v5; // r3
  unsigned int v6; // lr
  bool v7; // zf
  float *v8; // r2
  float *v10; // r1
  float v11; // s4
  float v12; // s0
  float v13; // s2
  float v14; // s14

  if ( a2 == 1 || *a1 >= a3 )
    return a1[1];
  v3 = &a1[3 * a2 - 3];
  v4 = *v3;
  if ( *v3 <= a3 )
    return v3[1];
  v5 = 0;
  v6 = a2 - 1;
  if ( a2 != 2 )
  {
    v5 = 0;
    v6 = a2 - 1;
    do
    {
      if ( a1[3 * ((int)(v5 + v6) / 2)] < a3 )
        v5 = (int)(v5 + v6) / 2;
      else
        v6 = (int)(v5 + v6) / 2;
      v7 = v5 == v6 - 1;
      if ( v5 != v6 - 1 )
        v7 = v5 == v6;
    }
    while ( !v7 );
    v4 = a1[3 * v6];
  }
  if ( (float)(a3 - v4) <= -0.001 || (float)(a3 - v4) >= 0.001 )
  {
    v10 = &a1[3 * v5];
    v11 = a3 - *v10;
    v12 = 1.0 / (float)(v4 - *v10);
    v13 = (float)(v11 * v11) * v12;
    v14 = v11 * (float)(v12 * v13);
    return (float)((float)((float)(v10[1]
                                 * (float)((float)((float)((float)(v12 * v14) + (float)(v12 * v14))
                                                 - (float)((float)(v12 * v13) * 3.0))
                                         + 1.0))
                         + (float)(a1[3 * v6 + 1]
                                 * (float)((float)((float)(v12 * v13) * 3.0)
                                         - (float)((float)(v12 * v14) + (float)(v12 * v14)))))
                 + (float)(v10[2] * (float)(v11 + (float)(v14 - (float)(v13 + v13)))))
         + (float)(a1[3 * v6 + 2] * (float)(v14 - v13));
  }
  else if ( v6 < a2 - 1 && (v8 = &a1[3 * v6 + 3], v4 == *v8) )
  {
    return v8[1];
  }
  else
  {
    return a1[3 * v6 + 1];
  }
}
