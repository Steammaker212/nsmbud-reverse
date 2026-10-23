/* sub_607F8EF8
 * address: 0x607F8EF8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F8EF8(int a1)
{
  int result; // r0
  _DWORD *v3; // r6
  int v4; // r4

  v3 = (_DWORD *)(a1 + 4584);
  result = FIELD_U32(a1, 4584);
  switch ( result )
  {
    case 0:
      sub_6051CFD8(a1 + 568);
      result = sub_6051D7B8(a1 + 568);
      if ( result == 1 )
      {
        *v3 = 1;
        result = sub_607F0390(a1);
      }
      break;
    case 1:
      sub_6051CFD8(a1 + 568);
      result = 1000;
      goto LABEL_10;
    case 2:
      result = sub_6051CFD8(a1 + 568);
      break;
    case 3:
      v4 = a1 + 568;
      sub_6051CFD8(v4);
      result = sub_6051D7B8(v4);
      if ( result == 1 )
      {
        result = 4;
        *v3 = 4;
      }
      break;
    case 4:
      sub_6051CFD8(a1 + 568);
      result = 2090;
LABEL_10:
      FIELD_U32(a1, 472) = result;
      break;
    default:
      return result;
  }
  return result;
}
