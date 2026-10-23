/* sub_6098B384
 * address: 0x6098B384   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098B384(int a1, int a2, int *a3)
{
  int v4; // r5
  _DWORD *v7; // r9
  int v8; // r4
  int v9; // r7
  int v10; // r0
  int v11; // r4
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int result; // r0
  int v18; // [sp+0h] [bp-20h] BYREF
  int v19; // [sp+4h] [bp-1Ch]
  int v20; // [sp+8h] [bp-18h]
  int v21; // [sp+Ch] [bp-14h]
  int v22; // [sp+10h] [bp-10h]
  int (*v23)(); // [sp+14h] [bp-Ch]
  int v24; // [sp+18h] [bp-8h]
  __int16 v25; // [sp+1Ch] [bp-4h]
  int v26; // [sp+20h] [bp+0h] BYREF
  int v27; // [sp+24h] [bp+4h]
  int v28; // [sp+28h] [bp+8h]
  int v29; // [sp+2Ch] [bp+Ch]
  int v30; // [sp+30h] [bp+10h]
  int v31; // [sp+34h] [bp+14h]
  int v32; // [sp+38h] [bp+18h]
  int v33; // [sp+3Ch] [bp+1Ch]

  v4 = 0;
  v7 = *(_DWORD **)(dword_60CCF464 + 36);
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  sub_6083D5C0(&v26);
  v26 = 34;
  v8 = *a3;
  v9 = a3[1];
  v10 = sub_60836514();
  v11 = (v8 + v9 + v10 - 1) & -v10;
  v12 = sub_6083650C();
  if ( v11 )
  {
    v14 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 24))(a2, 2 * v11, v12);
    FIELD_U32(a1, 376) = v14;
    v28 = v14;
    v27 = 2 * v11;
    sub_60836538(a1, v7, &v26);
  }
  v15 = *a3;
  if ( *a3 )
  {
    v18 = 16;
    v19 = v15;
    v20 = 2;
    v21 = a1;
    v22 = 0;
    v23 = sub_6098B5D8;
    v24 = a2;
    v25 = *((_WORD *)a3 + 4);
    ((void (__fastcall *)(int, _DWORD *, int *))sub_60999968)(a1 + 288, v7, &v18);
    v16 = *a3;
    FIELD_U8(a1, 381) = 1;
    v4 = 2 * v16;
  }
  result = a3[1];
  if ( result )
  {
    v25 = 0;
    v18 = 16;
    v19 = result;
    v20 = 2;
    v21 = a1;
    v22 = v4;
    v23 = sub_6098B5D8;
    v24 = a2;
    LOBYTE(v25) = *((_BYTE *)a3 + 8);
    ((void (__fastcall *)(int, _DWORD *, int *, int))sub_60999968)(a1 + 332, v7, &v18, v13);
    FIELD_U8(a1, 382) = 1;
    return 1;
  }
  return result;
}
