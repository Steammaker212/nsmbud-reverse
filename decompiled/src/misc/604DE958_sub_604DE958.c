/* sub_604DE958
 * address: 0x604DE958   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DE958(int result, _DWORD *a2)
{
  bool v2; // zf

  if ( !FIELD_U8(result, 492) )
  {
    v2 = FIELD_U8(result, 494) == 0;
    if ( FIELD_U8(result, 494) )
      v2 = FIELD_U8(result, 12) == 0;
    if ( !v2 )
      return sub_60473B88(*(_DWORD **)(result + 4), a2, 0);
  }
  return result;
}
