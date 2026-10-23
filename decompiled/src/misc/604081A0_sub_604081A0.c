/* sub_604081A0
 * address: 0x604081A0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_604081A0(int a1)
{
  _BYTE *result; // r0
  int v2; // r1

  result = (_BYTE *)(a1 + 3832);
  v2 = 60;
  do
  {
    if ( *result )
    {
      if ( result[1] )
        *result = 0;
    }
    --v2;
    result += 3856;
  }
  while ( v2 );
  return result;
}
