/* sub_6042C070
 * address: 0x6042C070   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042C070(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r7
  int v12; // r4
  int v13; // r2
  int v14; // r4
  int v15; // r5
  __int64 v16; // r0
  __int16 v18; // [sp+8h] [bp-80h] BYREF
  char v19; // [sp+Ah] [bp-7Eh]
  int v20; // [sp+Ch] [bp-7Ch]
  char v21; // [sp+31h] [bp-57h]
  char v22; // [sp+33h] [bp-55h]
  char v23; // [sp+60h] [bp-28h]
  char v24; // [sp+61h] [bp-27h]

  v8 = sub_6090B350(&v18);
  v20 |= 1u;
  v21 = 5;
  v22 = 6;
  v18 = 1;
  v23 = 4;
  v19 = 1;
  v24 = 0;
  sub_6090B4B0(v8, a2);
  v9 = dword_60C9C0FC + 24;
  sub_6091DD8C(FIELD_U32(dword_60C9C0FC, 24), a2, 1);
  sub_6042C76C(v9, a2, a4, a5, a1 + 193);
  v10 = a1[192];
  v11 = FIELD_U32(v10, 1772);
  v12 = FIELD_U32(v10, 1776);
  sub_6042C81C(v9, a2, v11, v12);
  v13 = 3;
  if ( (unsigned int)(v12 * v11) > 0x1000 )
    v13 = 7;
  sub_6042C8B8(v9, a2, v13);
  sub_6042C900(v9, a2, a1[192] + 1208, 0);
  sub_6042C900(v9, a2, a1[192] + 360, 1);
  sub_60922730(a1 + 4, 0, a1[71]);
  sub_60922278(a1 + 72, a2);
  v14 = FIELD_U32(a2, 192);
  v15 = a1[158];
  v16 = dword_60CC746C(a1 + 164);
  return dword_60CC7874(v14, v15, a1[157], 6, v16, HIDWORD(v16));
}
