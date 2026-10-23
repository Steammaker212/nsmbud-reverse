/* sub_604081DC
 * address: 0x604081DC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604081DC(int a1)
{
  int result; // r0
  int v2; // r1

  result = a1 + 3808;
  v2 = 60;
  do
  {
    if ( FIELD_U8(result, 24) )
    {
      if ( (unsigned int)(*(_DWORD *)result - 27) <= 4 )
        FIELD_U8(result, 24) = 0;
    }
    --v2;
    result += 3856;
  }
  while ( v2 );
  return result;
}
