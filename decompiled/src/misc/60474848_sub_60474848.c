/* sub_60474848
 * address: 0x60474848   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60474848(int a1, _DWORD *a2, int *a3)
{
  int result; // r0
  int v7; // r7

  result = *a3;
  if ( *a3 >= 1 )
  {
    v7 = 0;
    do
    {
      sub_60473624(a1, a2);
      result = *a3;
      ++v7;
      a2 += 2;
    }
    while ( v7 < *a3 );
  }
  return result;
}
