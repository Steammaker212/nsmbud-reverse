/* sub_601F7E84
 * address: 0x601F7E84   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601F7E84(int a1, int a2)
{
  _BOOL4 result; // r0

  switch ( a2 )
  {
    case 7:
    case 12:
    case 35:
    case 36:
    case 71:
    case 99:
    case 102:
    case 103:
    case 123:
    case 131:
    case 132:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 160:
    case 161:
      result = 1;
      break;
    default:
      result = a2 == 243;
      break;
  }
  return result;
}
