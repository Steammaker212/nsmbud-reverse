/* sub_60237B20
 * address: 0x60237B20   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237B20(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r1

  result = sub_60237DA0(a3);
  switch ( result )
  {
    case 3:
      sub_60880B64(a2, a1 + 80);
      v6 = a1 + 96;
      break;
    case 2:
      sub_60880B64(a2, a1 + 48);
      v6 = a1 + 64;
      break;
    case 1:
      sub_60880B64(a2, a1 + 16);
      v6 = a1 + 32;
      break;
    default:
      return result;
  }
  return sub_60880B80(a2, v6);
}
