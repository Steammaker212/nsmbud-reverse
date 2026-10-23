/* sub_60913448
 * address: 0x60913448   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913448(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // r3

  result = 1;
  if ( a3 >= 1 )
  {
    v5 = 0;
    while ( *(unsigned __int8 *)(a1 + v5) == *(unsigned __int8 *)(a2 + v5) )
    {
      if ( ++v5 >= a3 )
        return result;
    }
    return 0;
  }
  return result;
}
