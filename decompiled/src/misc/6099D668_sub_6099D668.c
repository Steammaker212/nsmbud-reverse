/* sub_6099D668
 * address: 0x6099D668   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6099D668(int a1, int a2, float a3)
{
  unsigned int v3; // r0
  float v5; // s0
  int v6; // r3
  float v7; // s4
  int v8; // r0

  v3 = FIELD_U8(a1, 3);
  if ( (v3 & 1) != 0 )
    return 0.0;
  if ( a3 < 0.0 )
    return *(float *)a2;
  v5 = (float)(int)((v3 >> 1) - 1) * a3;
  v6 = a2 + 8 * (int)v5;
  if ( (int)v5 >= (int)((v3 >> 1) - 1) )
    return *(float *)v6;
  v7 = v5 - (float)(int)v5;
  v8 = 2 * (int)v5;
  return (float)((float)((float)((float)((float)(v7 * (float)(v7 * 3.0)) + (float)(v7 * (float)(v7 * (float)(v7 * -2.0))))
                               * *(float *)(a2 + 4 * v8 + 8))
                       + (float)((float)((float)((float)(v7 * (float)(v7 * (float)(v7 + v7)))
                                               - (float)(v7 * (float)(v7 * 3.0)))
                                       + 1.0)
                               * *(float *)v6))
               + (float)((float)(v7 + (float)((float)(v7 * (float)(v7 * v7)) - (float)(v7 * (float)(v7 + v7))))
                       * *(float *)(a2 + 4 * (v8 | 1))))
       + (float)((float)((float)(v7 * (float)(v7 * v7)) - (float)(v7 * v7)) * *(float *)(a2 + 4 * v8 + 12));
}
