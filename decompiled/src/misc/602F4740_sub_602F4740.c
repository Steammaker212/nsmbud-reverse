/* sub_602F4740
 * address: 0x602F4740   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F4740(unsigned int *a1, float *a2)
{
  int v2; // r2
  unsigned int v3; // r2
  float v4; // s0

  v2 = a1[1] + 25165824;
  if ( v2 >= 1342177280 )
    v2 = 1342177280;
  a1[1] = v2;
  v3 = v2 + *a1;
  *a1 = v3;
  v4 = *(float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0))
     + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v3 >> 20) & 0xFF0)) * (float)(v3 & 0xFFFFFF))
             * 0.000000059605);
  *a2 = *a2 + v4;
  return (int)(float)(v4 * 50332000.0);
}
