/* sub_6021F50C
 * address: 0x6021F50C   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6021F50C(int a1, int a2, unsigned int a3, int a4)
{
  int v6; // r1
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r6
  int v10; // r7
  int v11; // r0
  int v12; // r10
  char v13; // r11
  int v14; // r5
  int v15; // r0
  char v16; // r1
  bool v17; // zf
  int v18; // r0
  int v19; // r0
  int v20; // r6
  int v21; // r3
  int v24; // [sp+8h] [bp-30h]
  unsigned int v25; // [sp+Ch] [bp-2Ch]
  int v26; // [sp+10h] [bp-28h]

  v6 = a4;
  if ( a4 )
    v6 = 3;
  if ( a3 != 1 )
    v6 = 0;
  v7 = a4;
  v26 = v6;
  if ( a4 != 1 )
    v7 = 0;
  v8 = a3;
  if ( a3 != 1 )
    v8 = 0;
  v25 = v8 & v7;
  v9 = 4;
  v10 = sub_60187054(dword_60CC6D78 + 984, a3, v8 & v7);
  v24 = a4;
  if ( !a4 )
    v9 = 1;
  if ( a3 != 1 )
    v9 = 4;
  while ( 1 )
  {
    v12 = dword_60AFD3B0[6 * a3 + v10];
    if ( v12 != -1 )
    {
      v13 = 0;
      v14 = 1;
      do
      {
        v15 = sub_60186FEC(dword_60CC6D78 + 984, a3, v14 - 1);
        v16 = 0;
        v17 = v12 == FIELD_U32(v15, 20);
        v18 = 0;
        if ( v17 )
          v16 = 1;
        else
          v18 = 1;
        v13 |= v16;
        if ( v14 > 4 )
          break;
        ++v14;
      }
      while ( v18 );
      if ( (v13 & 1) == 0 )
        break;
    }
    v11 = v26;
    if ( v10 <= v9 )
      v11 = v10 + 1;
    v10 = v11;
  }
  FIELD_U32(a2, 20) = v12;
  v19 = 4;
  v20 = v24;
  if ( v24 )
    v20 = 3;
  else
    v19 = 1;
  if ( a3 == 1 )
  {
    do
    {
      v21 = v20;
      if ( v10 <= v19 )
        v21 = v10 + 1;
      v10 = v21;
    }
    while ( dword_60AFD3B0[v21 + 6] == -1 );
  }
  else
  {
    do
    {
      v21 = v10 + 1;
      if ( v10 > 4 )
        v21 = 0;
      v10 = v21;
    }
    while ( dword_60AFD3B0[6 * a3 + v21] == -1 );
  }
  return sub_60187030(dword_60CC6D78 + 984, a3, v25, v21);
}
