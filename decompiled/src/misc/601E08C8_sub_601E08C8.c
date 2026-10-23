/* sub_601E08C8
 * address: 0x601E08C8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E08C8(int *a1)
{
  int v2; // r1
  int result; // r0
  _BOOL4 v4; // r1
  _BOOL4 v5; // r1

  v2 = *a1;
  result = 1;
  switch ( v2 )
  {
    case 0:
      v4 = sub_601D9E90((int)a1);
      result = 0;
      if ( !v4 )
      {
        v5 = sub_601D9EC8((int)a1);
        result = 9;
        if ( !v5 )
          goto LABEL_6;
      }
      break;
    case 1:
      return result;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      result = v2;
      break;
    default:
LABEL_6:
      result = 10;
      break;
  }
  return result;
}
