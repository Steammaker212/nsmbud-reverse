/* sub_607F7268
 * address: 0x607F7268   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F7268(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r6
  int v4; // r4

  v3 = a1 + 21202;
  result = a1[21202];
  switch ( result )
  {
    case 0:
      sub_6051BCEC((int)(a1 + 142));
      result = sub_6051BD68((int)(a1 + 142));
      if ( result == 1 )
      {
        *v3 = 1;
        result = sub_607F0390((int)a1);
      }
      break;
    case 1:
      sub_6051BCEC((int)(a1 + 142));
      result = 1000;
      goto LABEL_10;
    case 2:
      a1[120] = 1001;
      result = sub_6051BCEC((int)(a1 + 142));
      break;
    case 3:
      v4 = (int)(a1 + 142);
      sub_6051BCEC(v4);
      result = sub_6051BD68(v4);
      if ( result == 1 )
      {
        result = 4;
        *v3 = 4;
      }
      break;
    case 4:
      sub_6051BCEC((int)(a1 + 142));
      result = 2001;
LABEL_10:
      a1[118] = result;
      break;
    default:
      return result;
  }
  return result;
}
