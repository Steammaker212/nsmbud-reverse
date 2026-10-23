/* sub_604E5CC0
 * address: 0x604E5CC0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E5CC0(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  result = dword_60CC6D78;
  if ( dword_60CC6D78 )
  {
    v3 = *(_DWORD *)(sub_60834614(dword_60CC6D78) + 492);
    if ( v3 == 2 )
    {
      v6 = sub_604E6204(2);
      v4 = 8;
      if ( !v6 )
        v4 = 7;
    }
    else if ( v3 == 1 )
    {
      v4 = 5;
    }
    else if ( v3 )
    {
      v4 = 0;
    }
    else if ( LevelInfo_instance
           && sub_6040E394(FIELD_U8(LevelInfo_instance, 16), FIELD_U8(LevelInfo_instance, 17)) )
    {
      v4 = 0;
      v5 = a1[1141];
      if ( v5 < 4 )
        v4 = dword_60AF2924[v5];
    }
    else if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0 )
    {
      v7 = sub_60834614(dword_60CC6D78);
      v4 = 1;
      v8 = FIELD_U32(v7, 32) == 0;
      if ( a1[11089] != v8 )
      {
        a1[11089] = v8;
        a1[10203] |= 1u;
      }
    }
    else
    {
      v4 = FIELD_U8(dword_60CC6D78, 109032);
      if ( FIELD_U8(dword_60CC6D78, 109032) )
        v4 = 2;
    }
    return sub_604E633C(a1, v4);
  }
  return result;
}
