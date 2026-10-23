/* sub_604FE74C
 * address: 0x604FE74C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FE74C(int result)
{
  if ( FIELD_U8(result, 3553) )
  {
    FIELD_U8(result, 3552) = 1;
  }
  else if ( !FIELD_U8(result, 3552) )
  {
    return result;
  }
  FIELD_U8(result, 3552) = 0;
  return sub_60473B58((_DWORD *)(result + 4), 0xEu, 0);
}
