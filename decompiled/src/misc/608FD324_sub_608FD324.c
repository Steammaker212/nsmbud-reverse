/* sub_608FD324
 * address: 0x608FD324   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FD324(int *a1, _DWORD *a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r0
  int i; // r1
  int v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r6
  int v12; // r0
  int j; // r1
  int v14; // r6
  int v15; // r0
  int k; // r1
  int v17; // r6
  int v18; // r0
  int m; // r1
  int v20; // r6
  int v21; // r1
  int n; // r2
  int result; // r0

  v4 = 0;
  v5 = JP_US_EU_KR_CN_TW_ref(0);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = a2[1];
  if ( v5 == v6 )
    goto LABEL_54;
  for ( i = 1; *(unsigned __int8 *)(v5 + i - 1) == *(unsigned __int8 *)(v6 + i - 1); i += 2 )
  {
    if ( !*(_BYTE *)(v5 + i - 1) )
      goto LABEL_54;
    if ( i >= 524289 || *(unsigned __int8 *)(v5 + i) != *(unsigned __int8 *)(v6 + i) )
      break;
    if ( !*(_BYTE *)(v5 + i) )
      goto LABEL_54;
  }
  v4 = 1;
  v8 = JP_US_EU_KR_CN_TW_ref(1u);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v9 = a2[1];
  if ( v8 == v9 )
    goto LABEL_54;
  v10 = 1;
  v4 = 1;
  while ( *(unsigned __int8 *)(v8 + v10 - 1) == *(unsigned __int8 *)(v9 + v10 - 1) )
  {
    if ( !*(_BYTE *)(v8 + v10 - 1) )
      goto LABEL_54;
    if ( v10 >= 524289 || *(unsigned __int8 *)(v8 + v10) != *(unsigned __int8 *)(v9 + v10) )
      break;
    if ( !*(_BYTE *)(v8 + v10) )
      goto LABEL_54;
    v10 += 2;
  }
  v4 = 2;
  v11 = JP_US_EU_KR_CN_TW_ref(2u);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v12 = a2[1];
  if ( v11 == v12 )
    goto LABEL_54;
  for ( j = 1; *(unsigned __int8 *)(v11 + j - 1) == *(unsigned __int8 *)(v12 + j - 1); j += 2 )
  {
    if ( !*(_BYTE *)(v11 + j - 1) )
      goto LABEL_54;
    if ( j >= 524289 || *(unsigned __int8 *)(v11 + j) != *(unsigned __int8 *)(v12 + j) )
      break;
    if ( !*(_BYTE *)(v11 + j) )
      goto LABEL_54;
  }
  v4 = 3;
  v14 = JP_US_EU_KR_CN_TW_ref(3u);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v15 = a2[1];
  if ( v14 == v15 )
    goto LABEL_54;
  for ( k = 1; *(unsigned __int8 *)(v14 + k - 1) == *(unsigned __int8 *)(v15 + k - 1); k += 2 )
  {
    if ( !*(_BYTE *)(v14 + k - 1) )
      goto LABEL_54;
    if ( k >= 524289 || *(unsigned __int8 *)(v14 + k) != *(unsigned __int8 *)(v15 + k) )
      break;
    if ( !*(_BYTE *)(v14 + k) )
      goto LABEL_54;
  }
  v4 = 4;
  v17 = JP_US_EU_KR_CN_TW_ref(4u);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v18 = a2[1];
  if ( v17 == v18 )
    goto LABEL_54;
  for ( m = 1; *(unsigned __int8 *)(v17 + m - 1) == *(unsigned __int8 *)(v18 + m - 1); m += 2 )
  {
    if ( !*(_BYTE *)(v17 + m - 1) )
      goto LABEL_54;
    if ( m >= 524289 || *(unsigned __int8 *)(v17 + m) != *(unsigned __int8 *)(v18 + m) )
      break;
    if ( !*(_BYTE *)(v17 + m) )
      goto LABEL_54;
  }
  v4 = 5;
  v20 = JP_US_EU_KR_CN_TW_ref(5u);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v21 = a2[1];
  if ( v20 == v21 )
  {
LABEL_54:
    *a1 = v4;
    return 1;
  }
  else
  {
    for ( n = 1; ; n += 2 )
    {
      result = 0;
      if ( *(unsigned __int8 *)(v20 + n - 1) != *(unsigned __int8 *)(v21 + n - 1) )
        break;
      if ( !*(_BYTE *)(v20 + n - 1) )
        goto LABEL_54;
      if ( n >= 524289 || *(unsigned __int8 *)(v20 + n) != *(unsigned __int8 *)(v21 + n) )
        break;
      if ( !*(_BYTE *)(v20 + n) )
        goto LABEL_54;
    }
  }
  return result;
}
