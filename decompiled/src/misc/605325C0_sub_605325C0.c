/* sub_605325C0
 * address: 0x605325C0   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605325C0(int a1)
{
  _DWORD *v1; // r4
  int v2; // r6
  int v3; // r7
  int v4; // r0
  unsigned int result; // r0

  v1 = (_DWORD *)(a1 + 36);
  if ( sub_6047482C(a1 + 36, 1u) )
  {
    v2 = 1;
    v3 = *(_DWORD *)(sub_6047482C((int)v1, 1u) + 56);
    (*(void (__fastcall **)(int *))(dword_60CAACF8 + 12))(&dword_60CAACF8);
    (*(void (__fastcall **)(int *))(dword_60CAACF8 + 12))(&dword_60CAACF8);
    if ( dword_60CAACFC == v3 )
    {
LABEL_10:
      v4 = sub_6047482C((int)v1, 1u);
      return (*(int (__fastcall **)(int, float))(*(_DWORD *)v4 + 88))(v4, 1.0);
    }
    while ( *(unsigned __int8 *)(dword_60CAACFC + v2 - 1) == *(unsigned __int8 *)(v3 + v2 - 1) )
    {
      if ( !*(_BYTE *)(dword_60CAACFC + v2 - 1) )
        goto LABEL_10;
      if ( v2 > 0x80000 || *(unsigned __int8 *)(dword_60CAACFC + v2) != *(unsigned __int8 *)(v3 + v2) )
        break;
      if ( !*(_BYTE *)(dword_60CAACFC + v2) )
        goto LABEL_10;
      v2 += 2;
    }
  }
  result = sub_604746E4((int)v1, &dword_60CAACF8, &dword_60CAABF4);
  if ( result != -1 )
    return sub_604742D0(v1, 1u, &dword_60CAACF8, result, 1.0, 0);
  return result;
}
