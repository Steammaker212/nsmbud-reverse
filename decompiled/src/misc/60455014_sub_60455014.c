/* sub_60455014
 * address: 0x60455014   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60455014(float *a1, int a2, float a3, float a4, float a5)
{
  float *v7; // r5
  float v8; // s18
  float v9; // s20

  v7 = a1 + 1278;
  v8 = -8.0 - (float)((float)(int)(float)(a4 * -0.0625) * 16.0);
  v9 = (float)((float)(int)(float)(a3 * 0.0625) * 16.0) + 8.0;
  if ( sqrtf(
         (float)((float)((float)(a1[1279] - v8) * (float)(a1[1279] - v8))
               + (float)((float)(a1[1278] - v9) * (float)(a1[1278] - v9)))
       + (float)((float)(a1[1280] - a5) * (float)(a1[1280] - a5))) >= 40.0
    || a2 )
  {
    *v7 = v9;
    a1[1279] = v8;
  }
  else
  {
    ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v7, v9, 0.5, 16.0, 1.0);
    ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(a1 + 1279, v8, 0.5, 16.0, 1.0);
  }
  a1[1280] = a5;
  sub_604AF054(a1 + 361, v7);
  a1[356] = v9;
  a1[357] = v8;
  a1[358] = a5;
  return a1 + 358;
}
