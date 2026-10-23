/* sub_60974FA4
 * address: 0x60974FA4   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60974FA4(int a1)
{
  int v1; // r11
  _DWORD *result; // r0
  bool v4; // zf
  _WORD *v5; // r8
  int v6; // r10
  int v7; // r3
  int v8; // r5
  int v9; // r6
  int v10; // r7
  int v11; // r3
  int v12; // r5
  int v13; // r6
  int v14; // r7
  int v15; // r3
  int v16; // r5
  int v17; // r6
  int v18; // r7
  __int16 v19; // r2
  unsigned int *v20; // r0
  unsigned int v21; // r1
  unsigned int v22; // r1
  unsigned int v23; // r1
  int v24; // [sp+0h] [bp-28h]

  result = *(_DWORD **)(a1 + 8);
  v4 = result == 0;
  if ( result )
  {
    v1 = FIELD_U32(a1, 12);
    v4 = v1 == 0;
  }
  if ( !v4 )
  {
    FIELD_U32(a1, 1612) = result[3];
    FIELD_U32(a1, 1616) = result[4];
    FIELD_U32(a1, 1620) = result[5];
    FIELD_U32(a1, 1624) = result[6];
    FIELD_U32(a1, 1604) = result[1];
    FIELD_U32(a1, 1608) = result[2];
    v5 = (_WORD *)(a1 + 1532);
    v6 = FIELD_U16(a1, 1532);
    v24 = FIELD_U8(a1, 1534);
    v7 = FIELD_U32(v1, 4);
    v8 = FIELD_U32(v1, 8);
    v9 = FIELD_U32(v1, 12);
    v10 = FIELD_U32(v1, 16);
    FIELD_U32(a1, 1256) = *(_DWORD *)v1;
    FIELD_U32(a1, 1260) = v7;
    FIELD_U32(a1, 1264) = v8;
    FIELD_U32(a1, 1268) = v9;
    FIELD_U32(a1, 1272) = v10;
    v11 = FIELD_U32(v1, 24);
    v12 = FIELD_U32(v1, 28);
    v13 = FIELD_U32(v1, 32);
    v14 = FIELD_U32(v1, 36);
    FIELD_U32(a1, 1276) = FIELD_U32(v1, 20);
    FIELD_U32(a1, 1280) = v11;
    FIELD_U32(a1, 1284) = v12;
    FIELD_U32(a1, 1288) = v13;
    FIELD_U32(a1, 1292) = v14;
    v15 = FIELD_U32(v1, 44);
    v16 = FIELD_U32(v1, 48);
    v17 = FIELD_U32(v1, 52);
    v18 = FIELD_U32(v1, 56);
    FIELD_U32(a1, 1296) = FIELD_U32(v1, 40);
    FIELD_U32(a1, 1300) = v15;
    FIELD_U32(a1, 1304) = v16;
    FIELD_U32(a1, 1308) = v17;
    FIELD_U32(a1, 1312) = v18;
    v19 = FIELD_U16(v1, 60);
    FIELD_U8(a1, 1318) = FIELD_U8(v1, 62);
    FIELD_U16(a1, 1316) = v19;
    sub_60917754(a1 + 1320, v1 + 64);
    FIELD_U32(a1, 1520) = FIELD_U32(v1, 264);
    v20 = (unsigned int *)(a1 + 1528);
    do
      v21 = __ldrex(v20);
    while ( __strex(v21 | 4, v20) );
    if ( (unsigned __int16)*v5 != v6 )
    {
      do
        v22 = __ldrex(v20);
      while ( __strex(v22 | 2, v20) );
      *v5 = v6;
    }
    if ( FIELD_U8(a1, 1534) != v24 )
    {
      do
        v23 = __ldrex(v20);
      while ( __strex(v23 | 1, v20) );
      FIELD_U8(a1, 1534) = v24;
    }
    sub_6091AC94(a1 + 1256);
    result = (_DWORD *)(FIELD_U32(a1, 2352) | 0x400);
    FIELD_U32(a1, 2352) = result;
  }
  return result;
}
