/* sub_60562274
 * address: 0x60562274   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60562274(int a1)
{
  int v2; // r4
  unsigned int v3; // r0
  int v4; // r9
  int v5; // r0
  int v6; // r5
  int k; // r2
  int v8; // r5
  int i; // r1
  int v10; // r5
  int m; // r2
  int v12; // r5
  int j; // r1

  v2 = 0;
  v3 = FIELD_U32(a1, 8);
  if ( v3 == 8 )
    return v2;
  v2 = 0;
  if ( v3 >= 9 )
    v3 = 0;
  v4 = sub_6047482C(a1 + 3548 * v3 + 16, 0);
  if ( !v4 )
    return v2;
  v5 = FIELD_U32(a1, 8);
  if ( v5 == 7 )
  {
    v8 = FIELD_U32(v4, 56);
    (*(void (__fastcall **)(int *))(dword_60CAE1D0 + 12))(&dword_60CAE1D0);
    (*(void (__fastcall **)(int *))(dword_60CAE1D0 + 12))(&dword_60CAE1D0);
    if ( dword_60CAE1D4 == v8 )
      return FIELD_F32(v4, 44) != 0.0;
    for ( i = 1; *(unsigned __int8 *)(dword_60CAE1D4 + i - 1) == *(unsigned __int8 *)(v8 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(dword_60CAE1D4 + i - 1) )
        return FIELD_F32(v4, 44) != 0.0;
      if ( i >= 524289 || *(unsigned __int8 *)(dword_60CAE1D4 + i) != *(unsigned __int8 *)(v8 + i) )
        break;
      if ( !*(_BYTE *)(dword_60CAE1D4 + i) )
        return FIELD_F32(v4, 44) != 0.0;
    }
    v12 = FIELD_U32(v4, 56);
    (*(void (__fastcall **)(int *))(dword_60CAE1E8 + 12))(&dword_60CAE1E8);
    (*(void (__fastcall **)(int *))(dword_60CAE1E8 + 12))(&dword_60CAE1E8);
    if ( dword_60CAE1EC == v12 )
      return FIELD_F32(v4, 44) != 0.0;
    for ( j = 1; *(unsigned __int8 *)(dword_60CAE1EC + j - 1) == *(unsigned __int8 *)(v12 + j - 1); j += 2 )
    {
      if ( !*(_BYTE *)(dword_60CAE1EC + j - 1) )
        return FIELD_F32(v4, 44) != 0.0;
      if ( j >= 524289 || *(unsigned __int8 *)(dword_60CAE1EC + j) != *(unsigned __int8 *)(v12 + j) )
        break;
      if ( !*(_BYTE *)(dword_60CAE1EC + j) )
        return FIELD_F32(v4, 44) != 0.0;
    }
  }
  else
  {
    if ( v5 == 6 )
    {
      v6 = FIELD_U32(v4, 56);
      (*(void (__fastcall **)(int *))(dword_60CAE1F8 + 12))(&dword_60CAE1F8);
      (*(void (__fastcall **)(int *))(dword_60CAE1F8 + 12))(&dword_60CAE1F8);
      if ( dword_60CAE1FC != v6 )
      {
        for ( k = 1; *(unsigned __int8 *)(dword_60CAE1FC + k - 1) == *(unsigned __int8 *)(v6 + k - 1); k += 2 )
        {
          if ( !*(_BYTE *)(dword_60CAE1FC + k - 1) )
            return FIELD_F32(v4, 44) != 0.0;
          if ( k >= 524289 || *(unsigned __int8 *)(dword_60CAE1FC + k) != *(unsigned __int8 *)(v6 + k) )
            break;
          if ( !*(_BYTE *)(dword_60CAE1FC + k) )
            return FIELD_F32(v4, 44) != 0.0;
        }
        return v2;
      }
      return FIELD_F32(v4, 44) != 0.0;
    }
    v10 = FIELD_U32(v4, 56);
    (*(void (__fastcall **)(int *))(dword_60CAE1C0 + 12))(&dword_60CAE1C0);
    (*(void (__fastcall **)(int *))(dword_60CAE1C0 + 12))(&dword_60CAE1C0);
    if ( dword_60CAE1C4 == v10 )
      return FIELD_F32(v4, 44) != 0.0;
    for ( m = 1; *(unsigned __int8 *)(dword_60CAE1C4 + m - 1) == *(unsigned __int8 *)(v10 + m - 1); m += 2 )
    {
      if ( !*(_BYTE *)(dword_60CAE1C4 + m - 1) )
        return FIELD_F32(v4, 44) != 0.0;
      if ( m >= 524289 || *(unsigned __int8 *)(dword_60CAE1C4 + m) != *(unsigned __int8 *)(v10 + m) )
        break;
      if ( !*(_BYTE *)(dword_60CAE1C4 + m) )
        return FIELD_F32(v4, 44) != 0.0;
    }
  }
  return v2;
}
