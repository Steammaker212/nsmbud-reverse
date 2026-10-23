/* sub_605094EC
 * address: 0x605094EC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605094EC(int a1)
{
  int v2; // r4
  int result; // r0
  int v4; // r6
  int i; // r2
  int v6; // r0

  v2 = a1 + 40;
  sub_6047467C((_DWORD *)(a1 + 40), 1u, &dword_60CA7C88, (int)&dword_60CA7CF8, 1.0, 0);
  FIELD_U8(a1, 3754) = 1;
  result = sub_6047482C(v2, 5u);
  if ( result )
  {
    v4 = *(_DWORD *)(sub_6047482C(v2, 5u) + 56);
    (*(void (__fastcall **)(int *))(dword_60CA7CA8 + 12))(&dword_60CA7CA8);
    (*(void (__fastcall **)(int *))(dword_60CA7CA8 + 12))(&dword_60CA7CA8);
    result = dword_60CA7CAC;
    if ( dword_60CA7CAC == v4 )
    {
LABEL_10:
      v6 = sub_6047482C(v2, 5u);
      return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(dword_60CA7CAC + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA7CAC + i - 1) )
          goto LABEL_10;
        if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CA7CAC + i) != *(unsigned __int8 *)(v4 + i) )
          break;
        if ( !*(_BYTE *)(dword_60CA7CAC + i) )
          goto LABEL_10;
      }
    }
  }
  return result;
}
