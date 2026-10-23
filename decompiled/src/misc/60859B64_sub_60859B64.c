/* sub_60859B64
 * address: 0x60859B64   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60859B64(int result, int a2)
{
  int v2; // r3

  v2 = 0;
  while ( *(unsigned __int8 *)(result + 136 + v2) == *(unsigned __int8 *)(a2 + v2) )
  {
    if ( *(_BYTE *)(result + 136 + v2) )
    {
      if ( ++v2 < 24 )
        continue;
    }
    return result;
  }
  return 0;
}
