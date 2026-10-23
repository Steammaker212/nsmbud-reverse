/* sub_6095C8AC
 * address: 0x6095C8AC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095C8AC(int a1)
{
  int result; // r0
  int *v3; // r7
  int v4; // r4
  unsigned __int16 *v5; // r8
  int v6; // r6
  int v7; // r5
  unsigned __int16 *v8; // r9
  unsigned int v9; // r1
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r1
  int v13; // r4
  int v14; // r5
  int v15; // r0
  int v16; // r1
  _DWORD *v17; // [sp+4h] [bp-4Ch]
  _DWORD *v18; // [sp+8h] [bp-48h]
  int v19; // [sp+Ch] [bp-44h]
  int *v20; // [sp+10h] [bp-40h]
  _DWORD v21[3]; // [sp+14h] [bp-3Ch] BYREF
  _DWORD v22[12]; // [sp+20h] [bp-30h] BYREF

  v3 = (int *)(a1 + 9744);
  result = FIELD_U32(a1, 9744);
  v4 = *(v3 - 2336);
  if ( v4 )
  {
    v5 = (unsigned __int16 *)(a1 + 1744);
    v6 = 0;
    v7 = *(v3 - 2335);
    v20 = v3 - 2;
    v17 = (_DWORD *)a1;
    v19 = FIELD_U32(result, 8);
    v18 = (_DWORD *)(a1 + 9740);
    v8 = (unsigned __int16 *)(a1 + 1112);
    do
    {
      v9 = *v8;
      v10 = *v5;
      if ( v9 <= 1 )
        v9 = 1;
      if ( v10 <= 1 )
        v10 = 1;
      sub_60979864(v7, v9, v10);
      result = FIELD_U32(v7, 208);
      if ( !result )
      {
        v11 = *v3;
        v12 = *v18 + v6;
        v22[0] = *v20;
        v22[1] = v12;
        v22[2] = v11;
        result = sub_60979A00(v7, v22, v19 - v6);
        v6 += result;
      }
      v7 += 2088;
      --v4;
    }
    while ( v4 );
    v13 = v17[100];
    if ( v13 )
    {
      v14 = v17[101];
      do
      {
        result = FIELD_U32(v14, 208);
        if ( result )
        {
          v15 = *v3;
          v16 = v17[2435] + v6;
          v21[0] = *v20;
          v21[1] = v16;
          v21[2] = v15;
          result = sub_60979A00(v14, v21, v19 - v6);
          v6 += result;
        }
        v14 += 2088;
        --v13;
      }
      while ( v13 );
    }
  }
  return result;
}
