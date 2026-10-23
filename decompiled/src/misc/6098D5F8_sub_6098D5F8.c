/* sub_6098D5F8
 * address: 0x6098D5F8   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098D5F8(int a1, int *a2)
{
  signed int v4; // r6
  __int64 v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r7
  int v14; // r0
  int i; // r2
  int v16; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r0
  int v22; // r0

  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2[1] + 16))(a2[1]);
  sub_6098B5B8();
  if ( v4 >= 1 )
  {
    v5 = 4LL * (unsigned int)v4;
    if ( !is_mul_ok(4u, v4) )
      HIDWORD(v5) = 1;
    if ( HIDWORD(v5) )
      LODWORD(v5) = -1;
    v6 = sub_608DE334(v5, *a2, 4);
    if ( v6 )
    {
      FIELD_U32(a1, 20) = v4;
      FIELD_U32(a1, 24) = v6;
    }
    v7 = sub_608DE334(v4, *a2, 4);
    if ( v7 )
    {
      FIELD_U32(a1, 28) = v4;
      FIELD_U32(a1, 32) = v7;
    }
  }
  v8 = FIELD_U32(a1, 20);
  if ( v8 >= 1 )
  {
    if ( (v8 & 3) != 0 )
    {
      v9 = 0;
      do
        *(_DWORD *)(FIELD_U32(a1, 24) + 4 * v9++) = 0;
      while ( (v8 & 3) != v9 );
    }
    else
    {
      v9 = 0;
    }
    if ( (unsigned int)(v8 - 1) >= 3 )
    {
      v10 = v9 - v8;
      v11 = 4 * v9;
      v12 = 0;
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 24) + v11 - 4 * v12) = 0;
        *(_DWORD *)(FIELD_U32(a1, 24) + v11 - 4 * v12 + 4) = 0;
        *(_DWORD *)(FIELD_U32(a1, 24) + v11 - 4 * v12 + 8) = 0;
        v13 = FIELD_U32(a1, 24) + v11 - 4 * v12;
        v12 -= 4;
        FIELD_U32(v13, 12) = 0;
      }
      while ( v10 != v12 );
    }
  }
  v14 = FIELD_U32(a1, 28);
  if ( v14 >= 1 )
  {
    for ( i = 0; (v14 & 3) != i; *(_BYTE *)(FIELD_U32(a1, 32) + i++) = -1 )
      ;
    if ( (unsigned int)(v14 - 1) >= 3 )
    {
      v16 = i + 3;
      v17 = -v14;
      do
      {
        *(_BYTE *)(FIELD_U32(a1, 32) + v16 - 3) = -1;
        *(_BYTE *)(FIELD_U32(a1, 32) + v16 - 2) = -1;
        *(_BYTE *)(FIELD_U32(a1, 32) + v16 - 1) = -1;
        *(_BYTE *)(FIELD_U32(a1, 32) + v16) = -1;
        v16 += 4;
      }
      while ( v17 + v16 != 3 );
    }
  }
  FIELD_U32(a1, 36) = a2[1];
  FIELD_U32(a1, 836) = a2[2];
  v18 = a2[3];
  FIELD_U32(a1, 840) = v18;
  if ( v18 )
    FIELD_U32(v18, 4) = a1;
  v19 = dword_60CD0C2C;
  if ( a2[7] )
    v19 = a2[7];
  FIELD_U32(a1, 852) = v19;
  v20 = dword_60CD0C24;
  if ( a2[8] )
    v20 = a2[8];
  FIELD_U32(a1, 856) = v20;
  FIELD_U8(a1, 862) = *((_BYTE *)a2 + 24);
  if ( a2[4] )
    sub_6098DA18(a1 + 848, *a2);
  sub_6090B310(dword_60CCF464);
  sub_60854184(a1 + 40, *(_DWORD **)(dword_60CCF464 + 36), a2[9], 0, 0, 0, 0);
  sub_6085542C((int *)(a1 + 40), (int (__fastcall *)(int, int))sub_60990A1C, 0);
  v21 = operator_new_8DE25C(0x180u, (void *)*a2, 8);
  v22 = sub_6098B314(v21);
  FIELD_U32(a1, 864) = v22;
  sub_6098B384(v22, *a2, a2 + 10);
  sub_6090B32C(dword_60CCF464);
  return sub_6098B60C();
}
