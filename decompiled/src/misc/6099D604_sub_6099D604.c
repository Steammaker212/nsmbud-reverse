/* sub_6099D604
 * address: 0x6099D604   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6099D604(int a1, int a2, float a3)
{
  int v4; // r0
  float v5; // s2

  if ( a3 < 0.0 )
    return *(float *)a2;
  v4 = FIELD_U8(a1, 3) - 1;
  v5 = (float)v4 * a3;
  if ( (int)v5 >= v4 )
    return *(float *)(a2 + 4 * v4);
  else
    return *(float *)(a2 + 4 * (int)v5)
         + (float)((float)(v5 - (float)(int)v5)
                 * (float)(*(float *)(a2 + 4 * (int)v5 + 4) - *(float *)(a2 + 4 * (int)v5)));
}
