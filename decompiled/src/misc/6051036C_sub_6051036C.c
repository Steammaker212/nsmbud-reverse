/* sub_6051036C
 * address: 0x6051036C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051036C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r7
  int i; // r2
  int v5; // r0

  sub_6047F3A8(a1 + 2395, a1[2392]);
  sub_60513080(a1);
  v2 = sub_6047482C((int)(a1 + 14), 0);
  if ( v2 )
  {
    v3 = FIELD_U32(v2, 56);
    (*(void (__fastcall **)(int *))(dword_60CA84D8 + 12))(&dword_60CA84D8);
    (*(void (__fastcall **)(int *))(dword_60CA84D8 + 12))(&dword_60CA84D8);
    if ( dword_60CA84DC == v3 )
    {
LABEL_10:
      if ( sub_6047467C(a1 + 14, 0, &dword_60CA84D0, (int)&dword_60CA8468, 1.0, 0) == 1 )
        sub_6047482C((int)(a1 + 14), 0);
      goto LABEL_15;
    }
    for ( i = 1; *(unsigned __int8 *)(dword_60CA84DC + i - 1) == *(unsigned __int8 *)(v3 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(dword_60CA84DC + i - 1) )
        goto LABEL_10;
      if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CA84DC + i) != *(unsigned __int8 *)(v3 + i) )
        break;
      if ( !*(_BYTE *)(dword_60CA84DC + i) )
        goto LABEL_10;
    }
  }
  if ( sub_6047467C(a1 + 14, 0, &dword_60CA84A0, (int)&dword_60CA8468, 1.0, 0) == 1 && sub_6047482C((int)(a1 + 14), 0) )
  {
    v5 = sub_60473B4C((int)(a1 + 14));
    sub_6098F1D4(v5);
  }
LABEL_15:
  a1[2394] = 0;
  return 9576;
}
