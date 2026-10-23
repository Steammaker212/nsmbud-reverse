/* sub_601687F4
 * address: 0x601687F4   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601687F4(float *a1, float *a2, float *a3)
{
  float v3; // s2
  float v4; // s16
  float v5; // s2

  v3 = a2[2] - a3[2];
  v4 = sqrtf(
         (float)((float)((float)(a2[1] - a3[1]) * (float)(a2[1] - a3[1]))
               + (float)((float)(*a2 - *a3) * (float)(*a2 - *a3)))
       + (float)(v3 * v3));
  v5 = a2[2] - a1[25];
  return ((float)(sqrtf(
                    (float)((float)((float)(a2[1] - a1[24]) * (float)(a2[1] - a1[24]))
                          + (float)((float)(*a2 - a1[23]) * (float)(*a2 - a1[23])))
                  + (float)(v5 * v5))
                - v4) < 0.0)
       & ((float)(sqrtf(
                    (float)((float)((float)(a2[1] - a1[21]) * (float)(a2[1] - a1[21]))
                          + (float)((float)(*a2 - a1[20]) * (float)(*a2 - a1[20])))
                  + (float)((float)(a2[2] - a1[22]) * (float)(a2[2] - a1[22])))
                - v4) >= 0.0);
}
