/* sub_6099D9D0
 * address: 0x6099D9D0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6099D9D0(int a1, float *a2, float a3)
{
  int v3; // r2
  int v4; // r0
  float v5; // s2
  float *v6; // r1
  int v7; // r2

  v3 = 1;
  if ( *a2 >= a3 )
    return a2[v3];
  v4 = FIELD_U8(a1, 3) >> 1;
  if ( a2[2 * v4 - 2] <= a3 )
  {
    v3 = 2 * v4 - 1;
    return a2[v3];
  }
  v5 = 0.0;
  if ( v4 )
  {
    v6 = a2 + 1;
    v7 = 0;
    while ( v6[1] <= a3 )
    {
      ++v7;
      v6 += 2;
      if ( v7 >= v4 )
        return v5;
    }
    return *v6;
  }
  return v5;
}
