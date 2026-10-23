/* sub_604B8814
 * address: 0x604B8814   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B8814(int a1)
{
  int v2; // r4
  int result; // r0
  unsigned int v4; // r6
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r0

  v2 = a1 + 4;
  result = sub_6047467C((_DWORD *)(a1 + 4), 2u, &dword_60CA24B8, (int)&dword_60CA2490, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(v2, 2u);
    if ( result )
    {
      if ( dword_60CC6D8C )
      {
        v4 = FIELD_U8(dword_60CC6D8C, 17);
        if ( FIELD_U8(dword_60CC6D8C, 17) )
          v4 = 1;
      }
      else
      {
        v4 = 0;
      }
      if ( dword_60C99DD4 )
      {
        if ( *(_DWORD *)(sub_60834614(dword_60C99DD4) + 492) == 4 && dword_60C9A1F0 )
        {
          v5 = sub_60408934(dword_60C9A1F0);
          if ( v5 < 4 )
            v4 = dword_60AF28E4[v5];
        }
        else
        {
          v6 = FIELD_U32(a1, 3724);
          if ( (unsigned int)(v6 - 36) >= 2 )
          {
            if ( v6 == 35 )
              v4 |= *(_DWORD *)(sub_60834614(35) + 32) != 1;
          }
          else
          {
            v7 = *(_DWORD *)(sub_60834614(v6) + 32);
            if ( v7 != 1 )
              v7 = 0;
            v4 |= v7;
          }
        }
      }
      result = sub_6047482C(v2, 2u);
      if ( result )
        return (*(int (__fastcall **)(int, float))(*(_DWORD *)result + 96))(result, (float)v4);
    }
  }
  return result;
}
