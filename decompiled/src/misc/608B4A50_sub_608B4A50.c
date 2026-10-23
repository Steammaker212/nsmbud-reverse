/* sub_608B4A50
 * address: 0x608B4A50   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_608B4A50(__int64 result)
{
  unsigned int i; // r2
  unsigned int v2; // r3

  HIDWORD(result) = 0;
  for ( i = 0; ; ++i )
  {
    v2 = 0;
    if ( FIELD_U8(result, 12) )
      v2 = **(_DWORD **)(result + 4);
    if ( i >= v2 )
      break;
    *(_DWORD *)(FIELD_U32(result, 8) + 4 * i) = 0;
  }
  return result;
}
