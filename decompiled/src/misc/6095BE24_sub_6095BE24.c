/* sub_6095BE24
 * address: 0x6095BE24   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095BE24(int a1, int a2, int a3, int a4)
{
  int v5; // r8
  unsigned int v6; // r0
  _WORD *v7; // r9
  _BYTE *v8; // r2
  int v9; // r7
  unsigned __int8 *v10; // r10
  int v11; // r6
  _BYTE *v12; // r7
  int v13; // r0
  int v14; // r1
  int **v15; // r0
  unsigned int v16; // r7
  int v17; // r5
  int v18; // r7
  int v19; // r1
  int *v20; // r4
  int v21; // r5
  int v22; // t1
  int result; // r0

  v5 = 0;
  v7 = (_WORD *)(a1 + 9748);
  v6 = FIELD_U16(a1, 9748);
  v8 = *((_BYTE **)v7 - 2337);
  v9 = (v6 >> 3) & 1;
  if ( v8 )
  {
    a4 = *((_DWORD *)v7 - 2336) + 840;
    while ( (*(_BYTE *)a4 & 4) == 0 )
    {
      if ( (*(_BYTE *)a4 & 8) != 0 )
      {
        v5 = 1;
        goto LABEL_10;
      }
      a4 += 2088;
      if ( !--v8 )
        goto LABEL_10;
    }
    v9 = 1;
    if ( (v6 & 0x20) != 0 )
      goto LABEL_11;
  }
  else
  {
LABEL_10:
    if ( (v6 & 0x20) != 0 )
    {
LABEL_11:
      sub_6095C17C(a1);
      LOWORD(v6) = *v7 & 0xFFDF;
      *v7 = v6;
    }
  }
  if ( v9 == 1 )
  {
    sub_6095C4A8(a1);
LABEL_15:
    sub_6095C8AC(a1);
    LOWORD(v6) = *v7;
    goto LABEL_16;
  }
  if ( v5 == 1 )
    goto LABEL_15;
LABEL_16:
  *v7 = v6 & 0xFFF7;
  v10 = (unsigned __int8 *)(a1 + 9750);
  FIELD_U8(a1, 9750) = 1 - FIELD_U8(a1, 9750);
  FIELD_U32(a1, 408) = 0;
  v11 = FIELD_U32(a1, 400);
  if ( !v11 )
    goto LABEL_36;
  v12 = (_BYTE *)(FIELD_U32(a1, 404) + 840);
  do
  {
    sub_60979E58(v12 - 840);
    if ( (*(_BYTE *)v7 & 0x10) != 0 )
      *v12 |= 0x20u;
    if ( (unsigned __int8)v12[5] == 255 && (*v12 & 0x20) != 0 )
    {
      v13 = FIELD_U32(a1, 408);
      if ( v13 < FIELD_U32(a1, 412) )
      {
        *(_DWORD *)(FIELD_U32(a1, 416) + 4 * v13) = v12 - 840;
        ++FIELD_U32(a1, 408);
      }
    }
    v12 += 2088;
    --v11;
  }
  while ( v11 );
  v14 = FIELD_U32(a1, 400);
  if ( v14 )
  {
    a4 = 2088;
    v8 = (_BYTE *)(FIELD_U32(a1, 404) + 840);
    v15 = (int **)(a1 + 416);
    do
    {
      v16 = (char)v8[5];
      if ( v16 != -1 )
      {
        if ( (*v8 & 0x20) != 0 )
          goto LABEL_32;
        v17 = FIELD_U32(a1, 404);
        if ( FIELD_U32(a1, 400) > v16 )
          v17 += 2088 * (char)v8[5];
        if ( (FIELD_U8(v17, 840) & 0x20) != 0 )
        {
LABEL_32:
          v18 = FIELD_U32(a1, 408);
          if ( v18 < FIELD_U32(a1, 412) )
          {
            *(_DWORD *)(FIELD_U32(a1, 416) + 4 * v18) = v8 - 840;
            ++FIELD_U32(a1, 408);
          }
        }
      }
      v8 += 2088;
      --v14;
    }
    while ( v14 );
  }
  else
  {
LABEL_36:
    v15 = (int **)(a1 + 416);
  }
  v19 = FIELD_U32(a1, 408);
  if ( v19 )
  {
    v20 = *v15;
    v21 = 4 * v19;
    do
    {
      v22 = *v20++;
      sub_6097A84C(v22, *v10, v8, a4);
      v21 -= 4;
    }
    while ( v21 );
  }
  result = (unsigned __int16)*v7;
  if ( (result & 0x40) != 0 )
  {
    result &= 0xFFBFu;
    *v7 = result;
  }
  return result;
}
