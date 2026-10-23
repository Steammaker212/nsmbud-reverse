/* sub_60897E40
 * address: 0x60897E40   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60897E40(int *a1, int a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r10
  int v7; // r0
  int v8; // r7
  int v9; // r12
  int v10; // r3
  int v11; // r10
  int v12; // lr
  char *v13; // r6
  int v14; // r9
  int v15; // r5
  char *v16; // r3
  int v17; // r11
  int v19; // [sp+Ch] [bp-E4h]
  int *v20; // [sp+10h] [bp-E0h]
  int v21; // [sp+18h] [bp-D8h]
  int v22; // [sp+1Ch] [bp-D4h]
  int v23; // [sp+20h] [bp-D0h]
  _DWORD v24[16]; // [sp+28h] [bp-C8h] BYREF
  int v25; // [sp+68h] [bp-88h] BYREF
  int v26; // [sp+6Ch] [bp-84h]
  int v27; // [sp+70h] [bp-80h]
  int v28; // [sp+74h] [bp-7Ch]
  int v29; // [sp+78h] [bp-78h]
  int v30; // [sp+7Ch] [bp-74h]
  int v31; // [sp+80h] [bp-70h]
  int v32; // [sp+84h] [bp-6Ch]
  _DWORD v33[26]; // [sp+88h] [bp-68h] BYREF

  dword_60CC802C = 32;
  dword_60CC8030 = (int)&unk_60B15462;
  memset(v33, 0, 64);
  sub_60998EF4(v33);
  v4 = 0;
  v33[4] = 32;
  v33[5] = 32;
  v33[6] = 32;
  v33[7] = 32;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  BYTE1(v33[0]) = 3;
  v33[3] = 2817;
  sub_6083D5C0(&v25);
  v25 = 36;
  v5 = sub_6083CF64(a1, (int)v33);
  v6 = sub_6083650C();
  dword_60CC827C = 0x20000;
  dword_60CC8284 = v5 + 0x20000;
  v7 = sub_60836514();
  dword_60CC8284 = (v5 + v7 + 0x1FFFF) & -v7;
  dword_60CC8280 = sub_6088203C(dword_60CC8284, v6);
  v27 = dword_60CC8280;
  v20 = a1;
  v26 = dword_60CC8284;
  sub_60836538((int)dword_60CC8038, a1, &v25);
  v19 = v5;
  dword_60CC8278 = dword_60CC8280 + v5;
  v21 = a2;
  v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 8))(a2, 0x20000, 128);
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = v4;
    v12 = 0;
    v22 = v10;
    v23 = v9;
    do
    {
      v13 = (char *)&unk_60B15462 + v9;
      v14 = 0;
      v15 = v11;
      do
      {
        v16 = &v13[v14];
        v17 = (unsigned __int8)v13[v14];
        v14 += 3;
        *(_DWORD *)(v8 + v15) = ((v17 << 16) + 0x800000)
                              | (unsigned __int16)(((unsigned __int8)v16[1] << 8) + 0x8000)
                              | (unsigned __int8)(v16[2] + 0x80)
                              | 0xFF000000;
        v15 += 4;
      }
      while ( v14 != 96 );
      ++v12;
      v11 += 128;
      v9 += 96;
    }
    while ( v12 != 32 );
    v10 = v22 + 1;
    v4 += 4096;
    v9 = v23 + 3072;
  }
  while ( v22 != 31 );
  HIWORD(v33[1]) = 1;
  sub_6083D24C((int)&unk_60CC81A0, v20, (unsigned __int8 *)v33, dword_60CC8038, v19, dword_60CC827C);
  memset(v24, 0, sizeof(v24));
  sub_60998F30(v24);
  v24[12] = &unk_60CC81A0;
  LOBYTE(v24[0]) = 2;
  v24[1] = 2817;
  sub_6083D338((int)&unk_60CC8158, (int)v20, (unsigned __int8 *)v24);
  memset(v24, 0, 12);
  v24[5] = 32;
  v24[4] = 32;
  v24[3] = 32;
  dword_60CC75AC(unk_60CC81A8, 0, v24, v8);
  dword_60CC75BC(unk_60CC81A8, 0, v24);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)v21 + 12))(v21, v8);
}
