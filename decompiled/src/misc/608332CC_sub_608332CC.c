/* sub_608332CC
 * address: 0x608332CC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608332CC(float *a1, float *a2, float a3, float a4, float a5)
{
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s22
  float v13; // s24
  float v14; // s26
  float v15; // s0
  float *v16; // r0
  float v17; // s6
  float v18; // s4
  float v19; // s2
  float v20; // s0
  float v21; // s6
  float v22; // r1
  float v23; // r2

  v9 = *a1;
  v10 = a1[1];
  if ( *a1 == *a2 && (v11 = a1[2], v11 == a2[2]) )
  {
    v16 = a2 + 2;
  }
  else
  {
    v12 = v10 - a2[1];
    v13 = v9 - *a2;
    v14 = a1[2] - a2[2];
    v15 = sqrtf((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14));
    v16 = a2 + 2;
    if ( v15 >= a5 )
    {
      v17 = v15 * a3;
      if ( (float)(v15 * a3) != 0.0 )
      {
        v18 = v14 * a3;
        v19 = v12 * a3;
        v20 = v13 * a3;
        if ( v17 <= a4 )
        {
          if ( v17 >= a5 )
          {
LABEL_12:
            v9 = *a1 - v20;
            *a1 = v9;
            v10 = a1[1] - v19;
            a1[1] = v10;
            v11 = a1[2] - v18;
            a1[2] = v11;
            return sqrtf(
                     (float)((float)((float)(v10 - a2[1]) * (float)(v10 - a2[1]))
                           + (float)((float)(v9 - *a2) * (float)(v9 - *a2)))
                   + (float)((float)(v11 - *v16) * (float)(v11 - *v16)));
          }
          v21 = a5 / v17;
        }
        else
        {
          v21 = a4 / v17;
        }
        v18 = v18 * v21;
        v19 = v19 * v21;
        v20 = v20 * v21;
        goto LABEL_12;
      }
    }
    v22 = *a2;
    *a1 = *a2;
    v9 = v22;
    v23 = a2[1];
    a1[1] = v23;
    v10 = v23;
    v11 = a2[2];
    a1[2] = v11;
  }
  return sqrtf(
           (float)((float)((float)(v10 - a2[1]) * (float)(v10 - a2[1])) + (float)((float)(v9 - *a2) * (float)(v9 - *a2)))
         + (float)((float)(v11 - *v16) * (float)(v11 - *v16)));
}
