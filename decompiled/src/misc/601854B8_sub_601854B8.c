/* sub_601854B8
 * address: 0x601854B8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601854B8(float *a1, float *a2)
{
  float *v4; // r0
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float *v8; // r5
  float v9; // s1
  float v10; // s2
  float v11; // s0
  float v12; // s16
  unsigned int v13; // r4

  v4 = (float *)sub_601CF9C0(dword_60C8AEF0);
  if ( v4 )
  {
    v5 = a1[20];
    v6 = a1[21];
    v7 = a1[22];
    v8 = a2 + 1;
    v9 = v4[20] - v5;
    v10 = v4[21] - v6;
    v11 = v4[22] - v7;
    *a2 = v9;
    a2[1] = v10;
    a2[2] = v11;
  }
  else
  {
    v9 = *a2;
    v11 = a2[2];
    v8 = a2 + 1;
  }
  v12 = (float)((float)(v9 * v9) + 0.0) + (float)((float)(v11 * 0.7) * (float)(v11 * 0.7));
  v13 = sub_6000F7B8(v11, v9);
  sub_6000F7B8(*v8, sqrtf(v12));
  return (float)(*(float *)((char *)&sinLutTable[2] + ((v13 >> 20) & 0xFF0))
               + (float)((float)((float)(v13 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[3] + ((v13 >> 20) & 0xFF0)))
                       * 0.000000059605))
       * 3.6;
}
