/* sub_60532834
 * address: 0x60532834   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60532834(int a1)
{
  int v1; // r5
  int v2; // r8
  int v3; // r7
  int v4; // r4

  v1 = a1 + 36;
  v2 = 0;
  if ( sub_6047482C(a1 + 36, 1u) )
  {
    v3 = 1;
    v4 = *(_DWORD *)(sub_6047482C(v1, 1u) + 56);
    (*(void (__fastcall **)(int *))(dword_60CAACF8 + 12))(&dword_60CAACF8);
    (*(void (__fastcall **)(int *))(dword_60CAACF8 + 12))(&dword_60CAACF8);
    if ( dword_60CAACFC == v4 )
    {
      return (*(_BYTE *)(sub_6047482C(v1, 1u) + 51) & 1) == 0;
    }
    else
    {
      while ( *(unsigned __int8 *)(dword_60CAACFC + v3 - 1) == *(unsigned __int8 *)(v4 + v3 - 1) )
      {
        if ( !*(_BYTE *)(dword_60CAACFC + v3 - 1) )
          return (*(_BYTE *)(sub_6047482C(v1, 1u) + 51) & 1) == 0;
        if ( v3 > 0x80000 || *(unsigned __int8 *)(dword_60CAACFC + v3) != *(unsigned __int8 *)(v4 + v3) )
          break;
        if ( !*(_BYTE *)(dword_60CAACFC + v3) )
          return (*(_BYTE *)(sub_6047482C(v1, 1u) + 51) & 1) == 0;
        v3 += 2;
      }
    }
  }
  return v2;
}
