/* sub_60409994
 * address: 0x60409994   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60409994(int result, int a2)
{
  _BYTE *v2; // r2

  v2 = (_BYTE *)(result + 6559);
  if ( FIELD_U8(result, 6559) == 1 && !FIELD_U8(result, 6476) && FIELD_U8(result, 6478) == 1 )
  {
    result = FIELD_S8(result, 6561);
    if ( result == a2 )
    {
      *v2 = 3;
      return 3;
    }
  }
  return result;
}
