/* sub_6042E4E0
 * address: 0x6042E4E0   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042E4E0(_DWORD *a1, int a2)
{
  int v4; // r0
  char v5; // r1
  _DWORD *v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r7
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r7
  unsigned int v13; // r0
  int result; // r0
  int v15; // r6
  unsigned int v16; // r0
  _BYTE v17[4]; // [sp+8h] [bp-80h] BYREF
  int v18; // [sp+Ch] [bp-7Ch]
  int v19; // [sp+30h] [bp-58h]
  char v20; // [sp+34h] [bp-54h]
  char v21; // [sp+35h] [bp-53h]
  char v22; // [sp+61h] [bp-27h]

  dword_60CC7970(FIELD_U32(a2, 192), 50);
  sub_6091DD8C(*a1, a2, 1);
  v4 = sub_6090B350(v17);
  v20 = 1;
  v21 = 5;
  v19 = 33948165;
  v5 = *((_BYTE *)a1 + 1408);
  v17[0] = 1;
  v17[1] = v5;
  v18 |= 1u;
  sub_6090B4B0(v4, a2);
  v6 = (_DWORD *)a1[1];
  v7 = v6[288] + 140;
  v8 = sub_6083DC18(v7, 6, v6[256], v6[257], v6[280]);
  v9 = v8;
  if ( v8 )
  {
    v10 = sub_6083DD44(v8);
    if ( v10 >= 3 )
      LOBYTE(v10) = 3;
    v22 = v10;
    sub_6090BC48(v17, a2);
    sub_6042D60C((int)a1, a2, 6);
    sub_6042E1A4(a1, a2, v9);
  }
  v11 = sub_6083DC18(v7, 7, *(_DWORD *)(a1[1] + 1024), *(_DWORD *)(a1[1] + 1028), 0);
  v12 = v11;
  if ( v11 )
  {
    v13 = sub_6083DD44(v11);
    if ( v13 >= 3 )
      LOBYTE(v13) = 3;
    v22 = v13;
    sub_6090BC48(v17, a2);
    sub_6042D60C((int)a1, a2, 7);
    sub_6042E1A4(a1, a2, v12);
  }
  result = sub_6083DC18(v7, 8, *(_DWORD *)(a1[1] + 1024), *(_DWORD *)(a1[1] + 1028), 0);
  v15 = result;
  if ( result )
  {
    v16 = sub_6083DD44(result);
    if ( v16 >= 3 )
      LOBYTE(v16) = 3;
    v22 = v16;
    sub_6090BC48(v17, a2);
    sub_6042D60C((int)a1, a2, 8);
    return sub_6042E1A4(a1, a2, v15);
  }
  return result;
}
