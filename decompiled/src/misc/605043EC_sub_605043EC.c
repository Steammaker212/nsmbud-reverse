/* sub_605043EC
 * address: 0x605043EC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605043EC(int a1, _DWORD *a2)
{
  int v4; // r4
  int v5; // r12
  int v6; // r3
  int v7; // r2
  int v8; // r9
  int v9; // r2
  int i; // r3
  int result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = a2[1];
  (*(void (__fastcall **)(int *))(dword_60CA77E0 + 12))(&dword_60CA77E0);
  v5 = 2;
  if ( v4 == dword_60CA77E4 )
    goto LABEL_18;
  v6 = 1;
  v7 = a2[1];
  while ( *(unsigned __int8 *)(v7 + v6 - 1) == *(unsigned __int8 *)(dword_60CA77E4 + v6 - 1) )
  {
    if ( !*(_BYTE *)(v7 + v6 - 1) )
      goto LABEL_18;
    if ( v6 >= 524289 || *(unsigned __int8 *)(v7 + v6) != *(unsigned __int8 *)(dword_60CA77E4 + v6) )
      break;
    if ( !*(_BYTE *)(v7 + v6) )
      goto LABEL_18;
    v6 += 2;
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v8 = a2[1];
  (*(void (__fastcall **)(int *))(dword_60CA77E8 + 12))(&dword_60CA77E8);
  v5 = 4;
  if ( v8 == dword_60CA77EC )
  {
LABEL_18:
    result = FIELD_U32(a1, 36) | v5;
    FIELD_U32(a1, 36) = result;
  }
  else
  {
    v9 = a2[1];
    for ( i = 1; ; i += 2 )
    {
      result = *(unsigned __int8 *)(dword_60CA77EC + i - 1);
      if ( *(unsigned __int8 *)(v9 + i - 1) != result )
        break;
      if ( !*(_BYTE *)(v9 + i - 1) )
        goto LABEL_18;
      if ( i >= 524289 )
        break;
      result = *(unsigned __int8 *)(dword_60CA77EC + i);
      if ( *(unsigned __int8 *)(v9 + i) != result )
        break;
      if ( !*(_BYTE *)(v9 + i) )
        goto LABEL_18;
    }
  }
  return result;
}
