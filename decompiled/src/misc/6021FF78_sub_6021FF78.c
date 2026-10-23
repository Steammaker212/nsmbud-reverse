/* sub_6021FF78
 * address: 0x6021FF78   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021FF78(int a1, int *a2, unsigned int a3, _DWORD *a4)
{
  int v7; // r1
  int result; // r0
  int v9; // r7
  int v10; // r1

  v7 = sub_6040E460(*(unsigned __int8 *)a4);
  result = 0;
  if ( v7 == 1 )
  {
    v9 = 0;
    if ( *a4 == *(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, a3, 0) + 20)
      || (v9 = 1, *a4 == *(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, a3, 1u) + 20))
      || (v9 = 2, *a4 == *(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, a3, 2u) + 20))
      || (v9 = 3, *a4 == *(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, a3, 3u) + 20))
      || (v9 = 4, v10 = *(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, a3, 4u) + 20), result = 0, *a4 == v10) )
    {
      *a2 = v9;
      return 1;
    }
  }
  return result;
}
