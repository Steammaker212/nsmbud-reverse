/* sub_603FD464
 * address: 0x603FD464   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FD464(int result, int a2, int a3)
{
  bool v3; // zf

  if ( a3 == 20 )
  {
    switch ( a2 )
    {
      case 0:
        if ( FIELD_U8(result, 577) != 1 )
          goto LABEL_10;
        break;
      case 1:
        if ( FIELD_U8(result, 577) != 2 )
          goto LABEL_10;
        break;
      case 2:
        if ( FIELD_U8(result, 577) != 3 )
          goto LABEL_10;
        break;
      case 3:
        if ( FIELD_U8(result, 577) != 4 )
          goto LABEL_10;
        break;
      case 4:
        if ( FIELD_U8(result, 577) != 5 )
          goto LABEL_10;
        break;
      case 5:
        if ( FIELD_U8(result, 577) != 6 )
          goto LABEL_10;
        break;
      default:
        goto LABEL_10;
    }
  }
  else
  {
    v3 = a2 == 5;
    if ( a2 == 5 )
      v3 = a3 == 21;
    if ( !v3 || FIELD_U8(result, 577) != 7 )
LABEL_10:
      FIELD_U8(result, 577) = 0;
  }
  return result;
}
