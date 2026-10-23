/* sub_608B4550
 * address: 0x608B4550   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B4550(_DWORD *result, int *a2)
{
  int v2; // r2

  if ( a2 )
  {
    v2 = *a2;
    if ( (*a2 & 1) != 0 )
    {
      *result = a2[1];
      result[1] = a2[2];
      v2 = *a2;
    }
    if ( (v2 & 4) != 0 )
    {
      result[5] = a2[4];
      v2 = *a2;
    }
    if ( (v2 & 2) != 0 )
    {
      result[6] = a2[3];
      v2 = *a2;
    }
    if ( (v2 & 8) != 0 )
    {
      result[7] = a2[5];
      v2 = *a2;
    }
    if ( (v2 & 0x10) != 0 )
    {
      result[8] = a2 + 6;
      v2 = *a2;
    }
    if ( (v2 & 0x20) != 0 )
    {
      result[9] = a2 + 12;
      v2 = *a2;
    }
    if ( (v2 & 0x400) != 0 )
    {
      result[10] = a2 + 20;
      v2 = *a2;
    }
    if ( (v2 & 0x800) != 0 )
    {
      result[11] = a2 + 55;
      v2 = *a2;
    }
    if ( (v2 & 0x40) != 0 )
    {
      result[12] = a2 + 58;
      v2 = *a2;
    }
    if ( (v2 & 0x1000) != 0 )
    {
      result[2] = a2[66];
      v2 = *a2;
    }
    if ( (v2 & 0x3000) == 0x2000 )
    {
      result[3] = a2[67];
      v2 = *a2;
    }
    if ( (v2 & 0x4000) != 0 )
    {
      result[4] = a2[68];
      v2 = *a2;
    }
    if ( (v2 & 0x8000) != 0 )
    {
      result[13] = a2[69];
      v2 = *a2;
    }
    if ( (v2 & 0x10000) != 0 )
      result[14] = a2[70];
  }
  return result;
}
