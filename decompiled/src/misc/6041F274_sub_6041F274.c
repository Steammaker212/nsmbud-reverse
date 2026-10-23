/* sub_6041F274
 * address: 0x6041F274   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041F274(int a1, int a2)
{
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r8
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r9
  int v19; // r6
  int v20; // r7
  _DWORD *v21; // r8
  _DWORD *v22; // r11
  int v23; // r0
  int v24; // r0
  int v25; // r4
  unsigned int v26; // r0
  int v28; // [sp+Ch] [bp-F4h]
  int *v29; // [sp+10h] [bp-F0h]
  _BYTE v30[72]; // [sp+14h] [bp-ECh] BYREF
  __int16 v31; // [sp+5Ch] [bp-A4h] BYREF
  int v32; // [sp+60h] [bp-A0h]
  int v33; // [sp+84h] [bp-7Ch]
  char v34; // [sp+88h] [bp-78h]
  char v35; // [sp+89h] [bp-77h]
  char v36; // [sp+B5h] [bp-4Bh]
  char v37; // [sp+C4h] [bp-3Ch] BYREF

  v4 = dword_60C9BAF4;
  dword_60CC7970(FIELD_U32(a2, 192), 50);
  sub_6090B260(a1 + 4328, a2);
  v5 = ((int (__fastcall *)(char *, int))loc_6090E438)(&v37, a1 + 4328);
  sub_6090E560(v5, a2, a1 + 4328);
  v28 = a1 + 4328;
  sub_6091A624(a1 + 4328, a2, 7, a1 + 4404, 1.0, 255);
  v6 = sub_6090B350(&v31);
  v34 = 1;
  v35 = 5;
  v33 = 33948165;
  sub_6090B4B0(v6, a2);
  sub_6091DD8C(FIELD_U32(v4, 224), a2, 1);
  if ( (FIELD_U8(a1, 24) & 4) != 0 )
  {
    v7 = *(_DWORD *)(FIELD_U32(v4, 784) + 48);
    v8 = FIELD_U32(v7, 24);
    v9 = FIELD_U32(v7, 32);
    v10 = sub_6083E1A8(v4 + 460, FIELD_U32(a1, 76));
    sub_6083DC90(v30);
    v11 = sub_6083DD14(v10);
    sub_6083DDE8(v30, v11);
    v12 = sub_6083DD38(v10, 0);
    sub_6083DE14(v30, 0, v12);
    v13 = sub_6083DD38(v10, 1);
    sub_6083DE14(v30, 1, v13);
    v14 = sub_6083DD38(v10, 2);
    sub_6083DE14(v30, 2, v14);
    sub_6083DE20(v30, 2);
    v15 = sub_6041F598(v8, "_p0");
    sub_6083DDF0(
      v30,
      0,
      *(_DWORD *)(FIELD_U32(v8, 48) + 4 * FIELD_U8(v15, 14)),
      *(_DWORD *)(FIELD_U32(v8, 56) + 16 * FIELD_U8(v15, 14)));
    v16 = sub_6041F598(v8, "_n0");
    sub_6083DDF0(
      v30,
      1,
      *(_DWORD *)(FIELD_U32(v8, 48) + 4 * FIELD_U8(v16, 14)),
      *(_DWORD *)(FIELD_U32(v8, 56) + 16 * FIELD_U8(v16, 14)));
    v17 = sub_6041F598(v8, "_u0");
    sub_6083DDF0(
      v30,
      2,
      *(_DWORD *)(FIELD_U32(v8, 48) + 4 * FIELD_U8(v17, 14)),
      *(_DWORD *)(FIELD_U32(v8, 56) + 16 * FIELD_U8(v17, 14)));
    sub_6083DE00(v30, FIELD_U32(v9, 16), FIELD_U32(v9, 44));
    sub_6041F6C8(a1, a2, v30, 9);
    nullsub_78(v30);
  }
  v18 = a1;
  v19 = a1 + 140;
  v20 = 0;
  v21 = (_DWORD *)(a1 + 4396);
  v22 = (_DWORD *)(a1 + 4392);
  v29 = (int *)(a1 + 4400);
  do
  {
    v23 = 0;
    if ( v20 == 6 )
    {
      v31 = 1;
      v32 |= 1u;
      sub_6090B8B4(&v31, a2);
      sub_6090BAA4(&v31, a2);
      v23 = *v29;
    }
    v24 = sub_6083DC18(v19, v20, *v22, *v21, v23);
    v25 = v24;
    if ( v24 )
    {
      v26 = sub_6083DD44(v24);
      if ( v26 >= 3 )
        LOBYTE(v26) = 3;
      v36 = v26;
      sub_6090BC48(&v31, a2);
      sub_6041F6C8(v18, a2, v25, v20);
    }
    ++v20;
  }
  while ( v20 != 9 );
  return sub_6091A004(v28, a2);
}
