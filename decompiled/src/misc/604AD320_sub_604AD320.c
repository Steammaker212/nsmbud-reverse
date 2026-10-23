/* sub_604AD320
 * address: 0x604AD320   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AD320(int a1)
{
  int v1; // r11
  int v2; // r0
  int v3; // r7
  int v4; // r0
  int v5; // r4
  int i; // r2
  int v7; // r0
  int v8; // r4
  int j; // r2
  int v11; // [sp+10h] [bp-38h]
  int (**v12)(); // [sp+14h] [bp-34h] BYREF
  int v13; // [sp+18h] [bp-30h]
  int (**v14)(); // [sp+1Ch] [bp-2Ch] BYREF
  int v15; // [sp+20h] [bp-28h]

  v1 = 0;
  v11 = a1 + 64;
  while ( 1 )
  {
    v2 = sub_6047482C(v11, dword_60B02D6C[v1]);
    v3 = v2;
    if ( !v2 )
      return 0;
    v4 = FIELD_U32(v2, 56);
    v14 = &sead__SafeStringBase__vtable;
    v15 = v4;
    (*(void (__fastcall **)(int *))(dword_60CA1778 + 12))(&dword_60CA1778);
    (*(void (__fastcall **)(int *))(dword_60CA1778 + 12))(&dword_60CA1778);
    v5 = dword_60CA177C;
    ((void (__fastcall *)(int (***)()))v14[3])(&v14);
    if ( v5 != v15 )
    {
      for ( i = 1; *(unsigned __int8 *)(dword_60CA177C + i - 1) == *(unsigned __int8 *)(v15 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA177C + i - 1) )
          goto LABEL_20;
        if ( i >= 524289 || *(unsigned __int8 *)(dword_60CA177C + i) != *(unsigned __int8 *)(v15 + i) )
          break;
        if ( !*(_BYTE *)(dword_60CA177C + i) )
          goto LABEL_20;
      }
      v7 = FIELD_U32(v3, 56);
      v12 = &sead__SafeStringBase__vtable;
      v13 = v7;
      (*(void (__fastcall **)(int *))(dword_60CA1768 + 12))(&dword_60CA1768);
      (*(void (__fastcall **)(int *))(dword_60CA1768 + 12))(&dword_60CA1768);
      v8 = dword_60CA176C;
      ((void (__fastcall *)(int (***)()))v12[3])(&v12);
      if ( v8 != v13 )
      {
        for ( j = 1; *(unsigned __int8 *)(dword_60CA176C + j - 1) == *(unsigned __int8 *)(v13 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(dword_60CA176C + j - 1) )
            goto LABEL_20;
          if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA176C + j) != *(unsigned __int8 *)(v13 + j) )
            break;
          if ( !*(_BYTE *)(dword_60CA176C + j) )
            goto LABEL_20;
        }
        return 0;
      }
    }
LABEL_20:
    if ( (FIELD_U8(v3, 51) & 1) == 0 )
      return 0;
    if ( ++v1 > 3 )
      return 1;
  }
}
