/* sub_604096C4
 * address: 0x604096C4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604096C4(int result)
{
  _BYTE *v1; // r1

  v1 = (_BYTE *)(result + 6559);
  if ( FIELD_U8(result, 6559) == 1 && FIELD_U8(result, 6525) )
  {
    result = FIELD_U8(result, 6524);
    if ( !result )
    {
      *v1 = 3;
      return 3;
    }
  }
  return result;
}
