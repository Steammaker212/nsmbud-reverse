/* sub_60507FE0
 * address: 0x60507FE0   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60507FE0(int a1, _DWORD *a2)
{
  int v4; // r4
  int result; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r4
  int v9; // r2
  int i; // r3
  int v11; // r4
  int v12; // r2
  int j; // r3

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = a2[1];
  (*(void (__fastcall **)(int *))(dword_60CA7AE0 + 12))(&dword_60CA7AE0);
  result = 0;
  if ( v4 == dword_60CA7AE4 )
    goto LABEL_28;
  v6 = 1;
  v7 = a2[1];
  while ( *(unsigned __int8 *)(v7 + v6 - 1) == *(unsigned __int8 *)(dword_60CA7AE4 + v6 - 1) )
  {
    if ( !*(_BYTE *)(v7 + v6 - 1) )
      goto LABEL_28;
    if ( v6 >= 524289 || *(unsigned __int8 *)(v7 + v6) != *(unsigned __int8 *)(dword_60CA7AE4 + v6) )
      break;
    if ( !*(_BYTE *)(v7 + v6) )
      goto LABEL_28;
    v6 += 2;
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v8 = a2[1];
  (*(void (__fastcall **)(int *))(dword_60CA7AE8 + 12))(&dword_60CA7AE8);
  if ( v8 == dword_60CA7AEC )
  {
    result = 1;
LABEL_28:
    result = FIELD_U32(a1, 36) | dword_60B03724[result];
    FIELD_U32(a1, 36) = result;
    return result;
  }
  v9 = a2[1];
  for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *(unsigned __int8 *)(dword_60CA7AEC + i - 1); i += 2 )
  {
    result = 1;
    if ( !*(_BYTE *)(v9 + i - 1) )
      goto LABEL_28;
    if ( i >= 524289 || *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(dword_60CA7AEC + i) )
      break;
    if ( !*(_BYTE *)(v9 + i) )
      goto LABEL_28;
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v11 = a2[1];
  (*(void (__fastcall **)(int *))(dword_60CA7AF0 + 12))(&dword_60CA7AF0);
  result = 2;
  if ( v11 == dword_60CA7AF4 )
    goto LABEL_28;
  v12 = a2[1];
  for ( j = 1; *(unsigned __int8 *)(v12 + j - 1) == *(unsigned __int8 *)(dword_60CA7AF4 + j - 1); j += 2 )
  {
    if ( !*(_BYTE *)(v12 + j - 1) )
      goto LABEL_28;
    if ( j >= 524289 || *(unsigned __int8 *)(v12 + j) != *(unsigned __int8 *)(dword_60CA7AF4 + j) )
      break;
    if ( !*(_BYTE *)(v12 + j) )
      goto LABEL_28;
  }
  return result;
}
