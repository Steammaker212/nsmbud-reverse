/* sub_6095EA18
 * address: 0x6095EA18   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095EA18(_DWORD *a1, int a2)
{
  int result; // r0
  int v5; // r6
  int i; // r7
  int v7; // r0

  result = a1[114];
  if ( result >= 1 )
  {
    v5 = 0;
    for ( i = 0; i < result; ++i )
    {
      v7 = a1[156];
      if ( a1[155] > (unsigned int)i )
        v7 += v5;
      sub_60960724(v7, a2);
      result = a1[114];
      v5 += 1396;
    }
  }
  return result;
}
