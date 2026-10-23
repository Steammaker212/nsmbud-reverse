/* sub_601E6414
 * address: 0x601E6414   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E6414(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = dword_60CC6D78;
  result = FIELD_U32(dword_60CC6D78, 536);
  switch ( result )
  {
    case 0:
      if ( sub_6019AE00(0, 1u) || (result = sub_6019AE80(0, 1u), result == 1) )
      {
        FIELD_U32(a1, 68) = 52;
        FIELD_U32(v2, 536) = 1;
        result = 52;
      }
      break;
    case 1:
      if ( sub_6019AE00(1u, 0x14u)
        || sub_6019AE00(4u, 0x14u)
        || sub_6019AE00(5u, 0x14u)
        || (result = sub_6019AE80(5u, 0x14u), result == 1) )
      {
        FIELD_U32(a1, 68) = 53;
        result = 2;
        goto LABEL_20;
      }
      break;
    case 2:
      if ( sub_6019AE00(2u, 0x14u)
        || sub_6019AE00(3u, 0x14u)
        || sub_6019AE00(5u, 0x15u)
        || sub_6019AE00(6u, 0x14u) == 1
        || sub_6022CC88(dword_60C8D864, 1, 20)
        || sub_6022CC88(dword_60C8D864, 4, 20)
        || (result = sub_6022CC88(dword_60C8D864, 5, 20), result == 1) )
      {
        FIELD_U32(a1, 68) = 54;
        result = 3;
        goto LABEL_20;
      }
      break;
    case 3:
      result = FIELD_U8(dword_60CC6D78, 521);
      if ( (result & 1) != 0 )
      {
        result = 4;
LABEL_20:
        FIELD_U32(v2, 536) = result;
      }
      break;
    default:
      return result;
  }
  return result;
}
