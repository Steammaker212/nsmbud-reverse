/* sub_60814F00
 * address: 0x60814F00   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60814F00(_DWORD *a1)
{
  unsigned int v2; // r2
  int result; // r0
  int v4; // r1
  int v5; // r4
  unsigned int v6; // r0
  _BYTE v7[108]; // [sp+4h] [bp-6Ch] BYREF

  v2 = *a1 >> 25;
  result = 0;
  if ( v2 <= 2 )
  {
    v4 = sub_6042F294(v7, a1);
    result = 0;
    if ( v4 == 1 )
    {
      v5 = sub_6042F170((int)v7);
      v6 = sub_6042F114((int)v7);
      if ( v6 > 8 )
      {
        result = 9;
        if ( v5 == 1 )
          return 13;
      }
      else if ( ((1 << v6) & 0x83) != 0 )
      {
        result = 6;
        if ( v5 == 1 )
          return 10;
      }
      else if ( ((1 << v6) & 0x4C) != 0 )
      {
        result = 7;
        if ( v5 == 1 )
          return 11;
      }
      else
      {
        result = 8;
        if ( v5 == 1 )
          return 12;
      }
    }
  }
  return result;
}
