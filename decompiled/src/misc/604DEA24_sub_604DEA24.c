/* sub_604DEA24
 * address: 0x604DEA24   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DEA24(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r6

  result = a1[8];
  if ( !result )
  {
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( result == 1 )
    {
      v3 = a1[4];
      result = *(_DWORD *)(*(_DWORD *)(v3 + 4 * a1[5]) + 4) | 1;
      if ( result != 5 )
      {
        result = FIELD_U8(dword_60CC6D78, 20);
        if ( FIELD_U8(dword_60CC6D78, 20) )
        {
          result = dword_60C99E68;
          if ( dword_60C99E68 )
          {
            v4 = a1[21];
            a1[5] = v4;
            sub_6040200C(result, *(_DWORD *)(v3 + 4 * v4), a1[20]);
            sub_6047EBB4((int)(a1 + 6), *(_DWORD *)(a1[4] + 4 * v4));
            sub_60402084(dword_60C99E68, a1[20]);
            return sub_6040200C(dword_60C99E68, *(_DWORD *)(a1[4] + 4 * a1[21]), a1[20]);
          }
        }
      }
    }
  }
  return result;
}
