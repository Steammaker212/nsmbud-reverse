/* sub_60888864
 * address: 0x60888864   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60888864(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v6; // r7

  result = a1[3];
  if ( result )
  {
    if ( (int)a1[5] >= 1 )
    {
      v6 = 0;
      do
        sub_6083BD18(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1[1] + 32) + dword_60BF9D80[a1[2]] + (v6++ << 6)) + 104));
      while ( v6 < a1[5] );
    }
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a3 + 12))(a3, a1[4]);
    a1[3] = 0;
    a1[4] = 0;
    return 0;
  }
  return result;
}
