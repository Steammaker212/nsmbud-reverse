/* sub_602040E4
 * address: 0x602040E4   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602040E4(_WORD *a1)
{
  int result; // r0
  __int16 v3; // r0
  __int16 v4; // r0
  __int16 v5; // r0
  __int16 v6; // r0

  result = sub_60191698(dword_60C8996C);
  if ( result == 1 )
  {
    if ( sub_6021EE50(2, 0) != -1 && !*(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, 2u, 0) + 12) )
    {
      if ( a1[8] )
      {
        v3 = a1[8] - 1;
      }
      else
      {
        sub_60204314(a1, 0);
        v3 = 280;
      }
      a1[8] = v3;
    }
    if ( sub_6021EE50(2, 1) != -1 && !*(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, 2u, 1u) + 12) )
    {
      if ( a1[10] )
      {
        v4 = a1[10] - 1;
      }
      else
      {
        sub_60204314(a1, 1);
        v4 = 280;
      }
      a1[10] = v4;
    }
    if ( sub_6021EE50(2, 2) != -1 && !*(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, 2u, 2u) + 12) )
    {
      if ( a1[12] )
      {
        v5 = a1[12] - 1;
      }
      else
      {
        sub_60204314(a1, 2);
        v5 = 600;
      }
      a1[12] = v5;
    }
    if ( sub_6021EE50(2, 3) != -1 && !*(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, 2u, 3u) + 12) )
    {
      if ( a1[14] )
      {
        v6 = a1[14] - 1;
      }
      else
      {
        sub_60204314(a1, 3);
        v6 = 600;
      }
      a1[14] = v6;
    }
    result = sub_6021EE50(2, 4);
    if ( result != -1 )
    {
      result = *(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, 2u, 4u) + 12);
      if ( !result )
      {
        if ( a1[16] )
        {
          result = (unsigned __int16)a1[16] - 1;
        }
        else
        {
          sub_60204314(a1, 4);
          result = 600;
        }
        a1[16] = result;
      }
    }
  }
  return result;
}
