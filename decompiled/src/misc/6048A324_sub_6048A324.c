/* sub_6048A324
 * address: 0x6048A324   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048A324(int a1)
{
  int v2; // r6
  int result; // r0
  int v4; // r1
  int v5; // r8
  int v6; // r9
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r1
  int i; // r2
  unsigned int v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r1
  unsigned int v15; // r1
  unsigned int v16; // r1
  int v17; // [sp+4h] [bp-34h]
  int v18; // [sp+8h] [bp-30h]
  int v19; // [sp+Ch] [bp-2Ch]
  unsigned int v20; // [sp+10h] [bp-28h]

  v2 = FIELD_U32(a1, 3824);
  result = a1 + 3820;
  if ( v2 != result )
  {
    v4 = FIELD_U32(a1, 3832);
    v5 = 0;
    v6 = v2 - v4;
    v17 = result - v4;
    v18 = v4;
    do
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = v7;
        v20 = v7;
        v9 = sub_60491C7C();
        v10 = FIELD_U32(v6, 88);
        if ( v9 == v10 )
          break;
        for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v9 + i - 1) )
            goto LABEL_17;
          if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(v10 + i) )
            break;
          if ( !*(_BYTE *)(v9 + i) )
            goto LABEL_17;
        }
        v7 = v8 + 1;
        if ( v8 > 23 )
          v7 = 24;
        if ( v7 == 24 )
          goto LABEL_32;
      }
LABEL_17:
      v19 = 0;
      v12 = v20;
      if ( v20 >= 0x18 )
        v12 = 0;
      if ( *(_DWORD *)(a1 + 4 * v12 + 5876) == 256 )
        goto LABEL_29;
      v19 = 1;
      v13 = v20;
      if ( v20 >= 0x18 )
        v13 = 0;
      if ( *(_DWORD *)(a1 + 96 + 4 * v13 + 5876) == 256 )
        goto LABEL_29;
      v19 = 2;
      v14 = v20;
      if ( v20 >= 0x18 )
        v14 = 0;
      if ( *(_DWORD *)(a1 + 192 + 4 * v14 + 5876) == 256 )
        goto LABEL_29;
      v19 = 3;
      v15 = v20;
      if ( v20 >= 0x18 )
        v15 = 0;
      if ( *(_DWORD *)(a1 + 288 + 4 * v15 + 5876) == 256 )
      {
LABEL_29:
        v16 = v20;
        if ( v20 >= 0x18 )
          v16 = 0;
        *(_DWORD *)(a1 + 96 * v19 + 4 * v16 + 5876) = v5;
      }
LABEL_32:
      v2 = FIELD_U32(v2, 4);
      ++v5;
      v6 = v2 - v18;
      result = v17;
    }
    while ( v2 - v18 != v17 );
  }
  return result;
}
