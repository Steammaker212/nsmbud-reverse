/* sub_601C676C
 * address: 0x601C676C   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C676C(int a1, int a2, int a3)
{
  int result; // r0

  result = 16;
  switch ( a2 )
  {
    case 0:
    case 2:
    case 7:
    case 8:
    case 13:
    case 15:
    case 16:
    case 17:
    case 18:
      result = 238;
      if ( a3 == 2 )
        result = 16;
      break;
    case 3:
    case 28:
      return result;
    case 4:
    case 5:
      result = 18;
      break;
    case 6:
    case 26:
    case 27:
      result = 26;
      break;
    case 10:
      result = 9;
      break;
    case 11:
      result = 238;
      if ( a3 == 2 )
        result = 21;
      break;
    case 12:
    case 19:
      result = 238;
      if ( a3 == 2 )
        result = 18;
      break;
    case 20:
      result = 19;
      break;
    case 21:
      result = 20;
      break;
    case 22:
      result = 21;
      break;
    case 23:
      result = 18;
      break;
    case 24:
      result = 23;
      break;
    case 25:
      result = 22;
      break;
    case 29:
    case 30:
    case 31:
      result = 27;
      break;
    case 32:
      result = 25;
      break;
    case 33:
      result = 17;
      break;
    default:
      result = 238;
      break;
  }
  return result;
}
