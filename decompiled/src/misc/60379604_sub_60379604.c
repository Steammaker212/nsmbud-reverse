/* sub_60379604
 * address: 0x60379604   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60379604(int a1, unsigned int a2)
{
  _BOOL4 result; // r0
  unsigned int v4; // r3

  result = 1;
  if ( a2 >= 2 )
    a2 = 0;
  v4 = *(_DWORD *)(a1 + 8 * a2);
  if ( v4 <= 0x16 )
  {
    if ( ((1 << v4) & 0x100333) != 0 )
    {
      return *(unsigned __int16 *)(a1 + 8 * a2 + 6) != 1;
    }
    else if ( ((1 << v4) & 0x6000C0) != 0 )
    {
      return 0;
    }
  }
  return result;
}
