/* sub_604A8930
 * address: 0x604A8930   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_604A8930(int a1)
{
  int v1; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r10
  int i; // r5
  int v7; // r9
  char v8; // r0
  int v9; // r1
  int v10; // r11
  int v11; // r10
  int v12; // r0
  _DWORD *v13; // r2
  char v14; // r3
  int v15; // r1
  unsigned int v16; // r6
  unsigned int v17; // r0
  int v18; // r1
  _BYTE *result; // r0
  _BYTE v20[184]; // [sp+10h] [bp-B8h] BYREF

  v1 = 95272;
  v3 = 61;
  do
  {
    v4 = *(_DWORD *)(a1 + v1);
    if ( v4 )
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 4))(v4, 0);
    v1 += 2988;
    --v3;
  }
  while ( v3 );
  sub_6081EDE4(dword_60CC6D78);
  sub_60834AE0(a1 + 3732, 4, a1 + 277524, 6);
  v5 = 277540;
  for ( i = 0; i != 6; ++i )
  {
    v7 = a1 + 24 * i;
    v8 = 0;
    if ( FIELD_U8(v7, 277524) )
    {
      v8 = 0;
      if ( FIELD_U32(v7, 277544) == 6 )
      {
        v9 = *(_DWORD *)(v7 + v5);
        v10 = v5;
        v11 = 0;
        v12 = 0;
        if ( v9 >= 0 )
          v12 = sub_60834674(v9);
        v13 = (_DWORD *)(a1 + 97804);
        while ( 1 )
        {
          v14 = 0;
          if ( *(v13 - 543) == 8 )
          {
            v14 = 4;
            if ( *v13 == v12 )
            {
              v9 = v11;
              v14 = 1;
            }
          }
          if ( (v14 & 3 | 4) != 4 )
            break;
          ++v11;
          v13 += 747;
          if ( v11 >= 61 )
          {
            v8 = 0;
            v5 = v10;
            goto LABEL_20;
          }
        }
        v8 = 0;
        v5 = v10;
        if ( (unsigned int)v9 <= 0x3C )
        {
          v15 = *(_DWORD *)(a1 + 2988 * v9 + 95272);
          if ( v15 )
            v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
        }
      }
    }
LABEL_20:
    FIELD_U8(v7, 277525) = v8;
  }
  qmemcpy(v20, (const void *)(a1 + 277524), 0x90u);
  sub_60834718(v20, 6);
  if ( FIELD_S32(a1, 279736) >= 1 )
  {
    v16 = 0;
    do
    {
      v17 = 0;
      if ( v16 < 6 )
        v17 = v16;
      sub_604AC9C8(
        a1,
        *(_DWORD *)(a1 + 24 * v17 + 277544),
        *(_DWORD *)(a1 + 24 * v17 + 277532),
        *(_DWORD *)(a1 + 24 * v17 + v5),
        *(_DWORD *)(a1 + 24 * v17 + 277528));
      ++v16;
    }
    while ( (signed int)v16 < FIELD_U32(a1, 279736) );
  }
  v18 = 61;
  result = (_BYTE *)(a1 + 97951);
  do
  {
    if ( *(result - 6) )
      *result = 1;
    result += 2988;
    --v18;
  }
  while ( v18 );
  return result;
}
