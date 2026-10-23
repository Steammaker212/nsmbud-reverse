/* sub_60888558
 * address: 0x60888558   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60888558(_DWORD *result, int a2, int a3)
{
  _DWORD *v3; // r4
  int v5; // r1
  int v6; // r0
  int v7; // r7
  int v8; // r6

  v3 = result;
  v5 = result[4];
  if ( v5 )
  {
    v6 = result[6];
    if ( v6 >= 1 )
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        if ( *(_BYTE *)(v5 + v7) )
        {
          sub_6083BD18(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3[1] + 32) + dword_60BF9D80[v3[2]] + (v8 << 6)) + 104));
          sub_608A4CE4(v3[4] + v7);
          v6 = v3[6];
        }
        if ( ++v8 >= v6 )
          break;
        v5 = v3[4];
        v7 += 372;
      }
    }
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a3 + 12))(a3, v3[5]);
    v3[4] = 0;
    v3[5] = 0;
    return 0;
  }
  return result;
}
