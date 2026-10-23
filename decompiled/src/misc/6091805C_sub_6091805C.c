/* sub_6091805C
 * address: 0x6091805C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091805C(int a1)
{
  int v1; // r4
  int v2; // r0
  _DWORD *v3; // r9
  int result; // r0
  int v5; // r10
  int i; // r4
  int *v7; // r7
  int v8; // r1
  int v9; // r1
  int v10; // r0
  unsigned __int16 *v11; // r4
  _DWORD *v12; // r11
  int v13; // r6
  int v14; // r5
  unsigned __int8 v15; // r0
  unsigned __int8 *v16; // r5
  int v17; // t1
  _DWORD *v18; // r8
  int v19; // r9
  int v20; // r10
  int v21; // r1
  int v22; // [sp+4h] [bp-2Ch]
  int v23; // [sp+4h] [bp-2Ch]
  int v24; // [sp+8h] [bp-28h]

  v1 = a1;
  sub_6086EFC4(a1, FIELD_U32(dword_60CCFC8C, 24));
  v2 = textures_bntx_ref(v1);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    result = FIELD_U32(v2, 64);
    if ( !FIELD_U8(result, 272) )
      return result;
    v5 = *(_DWORD *)(v3[14] + 4);
    if ( v5 >= 1 )
    {
      v22 = v1;
      for ( i = 0; i != v5; ++i )
      {
        v7 = *(int **)(v3[10] + 8 * i);
        *(_DWORD *)(v7[34] + 64) = 0;
        v8 = v7[36];
        if ( v8 != -1 )
        {
          sub_60916A94(dword_60CCFC8C, v8);
          sub_6083D2EC(v7[32]);
          sub_6083D48C(v7[34]);
        }
        v7[36] = 0;
        v7[37] = 0;
      }
      result = v3[16];
      v1 = v22;
    }
    if ( v3[18] == result )
      sub_60836614(result);
    v3[18] = 0;
  }
  result = FIELD_U16(v1, 188);
  if ( FIELD_U16(v1, 188) )
  {
    v9 = 0;
    v23 = v1;
    do
    {
      v24 = v9;
      v10 = FIELD_U32(v1, 40) + 120 * v9;
      v11 = (unsigned __int16 *)(v10 + 108);
      if ( FIELD_U16(v10, 108) )
      {
        v12 = (_DWORD *)(v10 + 64);
        v13 = 0;
        do
        {
          v14 = *v12 + 184 * v13;
          v17 = FIELD_U8(v14, 168);
          v16 = (unsigned __int8 *)(v14 + 168);
          v15 = v17;
          if ( v17 )
          {
            v18 = (_DWORD *)(*v12 + 184 * v13 + 144);
            v19 = 0;
            v20 = 0;
            do
            {
              v21 = *(_DWORD *)(*v18 + v19);
              if ( (v21 & *(_DWORD *)(*v18 + v19 + 4)) != 0xFFFFFFFF )
              {
                sub_60916668(dword_60CCFC8C, v21);
                v15 = *v16;
              }
              ++v20;
              v19 += 8;
            }
            while ( v20 < v15 );
          }
          ++v13;
        }
        while ( v13 < *v11 );
      }
      v1 = v23;
      result = FIELD_U16(v23, 188);
      v9 = v24 + 1;
    }
    while ( v24 + 1 < result );
  }
  return result;
}
