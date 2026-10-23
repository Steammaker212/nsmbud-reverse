/* sub_60510928
 * address: 0x60510928   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60510928(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r7
  int i; // r2

  if ( FIELD_U32(a1, 11616) == 2 )
  {
    v2 = sub_6047467C((_DWORD *)(a1 + 56), 0, &dword_60CA84D8, (int)&dword_60CA8468, 1.0, 0);
    goto LABEL_14;
  }
  v3 = sub_6047482C(a1 + 56, 0);
  if ( v3 )
  {
    v4 = FIELD_U32(v3, 56);
    (*(void (__fastcall **)(int *))(dword_60CA84D8 + 12))(&dword_60CA84D8);
    (*(void (__fastcall **)(int *))(dword_60CA84D8 + 12))(&dword_60CA84D8);
    if ( dword_60CA84DC == v4 )
    {
LABEL_12:
      v2 = sub_6047467C((_DWORD *)(a1 + 56), 0, &dword_60CA84E0, (int)&dword_60CA8468, 1.0, 0);
      goto LABEL_14;
    }
    for ( i = 1; *(unsigned __int8 *)(dword_60CA84DC + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(dword_60CA84DC + i - 1) )
        goto LABEL_12;
      if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CA84DC + i) != *(unsigned __int8 *)(v4 + i) )
        break;
      if ( !*(_BYTE *)(dword_60CA84DC + i) )
        goto LABEL_12;
    }
  }
  v2 = sub_6047467C((_DWORD *)(a1 + 56), 0, &dword_60CA84C8, (int)&dword_60CA8468, 1.0, 0);
LABEL_14:
  if ( v2 == 1 )
    sub_6047482C(a1 + 56, 0);
  FIELD_U8(a1, 4751) = 1;
  return sub_60402084(dword_60C99E68, FIELD_U32(a1, 4740));
}
