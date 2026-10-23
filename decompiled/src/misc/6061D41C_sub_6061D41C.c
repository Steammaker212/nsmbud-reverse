/* sub_6061D41C
 * address: 0x6061D41C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6061D41C(_DWORD *result)
{
  int v1; // r1
  bool v2; // cc
  int v3; // r3
  float v4; // s0
  float v5; // s2
  float v6; // s8
  float v7; // s2
  float v8[2]; // [sp+0h] [bp-18h] BYREF
  float v9[4]; // [sp+8h] [bp-10h] BYREF

  v1 = result[1693];
  v2 = v1 < 2;
  v3 = v1 - 1;
  if ( v1 < 2 )
    LOBYTE(v1) = 1;
  result[1693] = v3;
  if ( v2 )
  {
    *((_BYTE *)result + 19) = v1;
  }
  else
  {
    v4 = *((float *)result + 36) - *((float *)result + 1690);
    *((float *)result + 36) = v4;
    v5 = *((float *)result + 37) - *((float *)result + 1691);
    *((float *)result + 37) = v5;
    *((float *)result + 38) = *((float *)result + 38) - *((float *)result + 1692);
    v6 = *((float *)result + 144);
    v7 = v5 * 32.0;
    v9[0] = -(float)(v4 * 40.0);
    v8[0] = v4 * 40.0;
    v9[1] = v7 + (float)(v6 * 0.5);
    v8[1] = (float)(v6 * 0.5) - v7;
    return sub_60165340((int)(result + 1526), v9, v8);
  }
  return result;
}
