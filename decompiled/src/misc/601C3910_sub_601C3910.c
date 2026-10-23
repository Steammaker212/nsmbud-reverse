/* sub_601C3910
 * address: 0x601C3910   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601C3910(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r1

  v2 = *a2;
  v3 = 24;
  switch ( v2 )
  {
    case 0:
      goto LABEL_11;
    case 1:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 56:
    case 57:
      return result;
    case 2:
      v3 = 25;
      goto LABEL_11;
    case 5:
      v3 = 26;
      goto LABEL_11;
    case 10:
      v3 = 27;
      goto LABEL_11;
    case 22:
      v3 = 30;
      goto LABEL_11;
    case 55:
    case 58:
      v3 = 28;
      goto LABEL_11;
    default:
      if ( v2 == 132 )
      {
        v3 = 29;
      }
      else if ( v2 != 184 )
      {
        return result;
      }
LABEL_11:
      if ( result[266] != v3 )
      {
        result[265] = dword_60AFC140[v3 - 24];
        result[266] = v3;
        return (_DWORD *)sub_605EAC24(result[236], 0.0, 0.0);
      }
      return result;
  }
}
