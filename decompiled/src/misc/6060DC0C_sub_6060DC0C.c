/* sub_6060DC0C
 * address: 0x6060DC0C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6060DC0C(_DWORD *result)
{
  int v1; // r1
  float v2; // s0
  float v3; // s2
  float v4; // s6
  float v5; // s2
  float v6[2]; // [sp+0h] [bp-18h] BYREF
  float v7[4]; // [sp+8h] [bp-10h] BYREF

  v1 = result[1695];
  result[1695] = v1 - 1;
  if ( v1 < 2 )
  {
    *((_BYTE *)result + 19) = 1;
  }
  else
  {
    v2 = *((float *)result + 36) - *((float *)result + 1692);
    *((float *)result + 36) = v2;
    v3 = *((float *)result + 37) - *((float *)result + 1693);
    *((float *)result + 37) = v3;
    *((float *)result + 38) = *((float *)result + 38) - *((float *)result + 1694);
    if ( result[1697] == 1 )
    {
      if ( v1 <= 20 )
        *((_BYTE *)result + 7356) = 1;
      v4 = *((float *)result + 144);
      v5 = v3 * 8.0;
      v7[0] = v2 * -8.0;
      v6[0] = v2 * 8.0;
      v7[1] = v4 + v5;
      v6[1] = v4 - v5;
      return sub_60165340((int)(result + 1528), v7, v6);
    }
  }
  return result;
}
