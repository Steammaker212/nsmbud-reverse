/* sub_6090B4B0
 * address: 0x6090B4B0   size: 916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090B4B0(unsigned __int8 *a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r6
  int i; // r4
  char v7; // r7
  int j; // r6
  int v9; // r1
  int v11; // [sp+18h] [bp-48h]
  _BYTE v12[4]; // [sp+1Ch] [bp-44h] BYREF
  _BYTE v13[8]; // [sp+20h] [bp-40h] BYREF
  _BYTE v14[4]; // [sp+28h] [bp-38h] BYREF
  _BYTE v15[4]; // [sp+2Ch] [bp-34h] BYREF
  _BYTE v16[48]; // [sp+30h] [bp-30h] BYREF

  v3 = FIELD_U32(a2, 192);
  dword_60CC7674(v16);
  dword_60CC76B0(v14);
  v4 = *((_DWORD *)a1 + 1);
  v11 = v3;
  if ( v4 )
  {
    v5 = 0;
    for ( i = 0; ; ++i )
    {
      if ( (v4 & (1 << i)) != 0 )
      {
        ((void (__fastcall *)(_BYTE *, int, int))dword_60CC76B4)(v14, i, 1);
        ((void (__fastcall *)(_BYTE *, int))dword_60CC7678)(v16, i);
        ((void (__fastcall *)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))dword_60CC767C)(
          v16,
          a1[v5 + 40],
          a1[v5 + 42],
          a1[v5 + 41],
          a1[v5 + 43]);
        v3 = v11;
        dword_60CC7680(v16, a1[v5 + 44], a1[v5 + 45]);
        dword_60CC77F8(v11, v16);
      }
      if ( v5 == 42 )
        break;
      v4 = *((_DWORD *)a1 + 1);
      v5 += 6;
    }
  }
  dword_60CC76B8(v14, 3);
  dword_60CC7800(v3, v14);
  dword_60CC78F0(v3, a1 + 8);
  v7 = 0;
  for ( j = 0; j != 8; ++j )
  {
    dword_60CC76D0(
      v15,
      j,
      (*((_DWORD *)a1 + 7) >> v7) & 1,
      (*((_DWORD *)a1 + 7) >> v7 >> 1) & 1,
      (*((_DWORD *)a1 + 7) >> v7 >> 2) & 1,
      (*((_DWORD *)a1 + 7) >> v7 >> 3) & 1);
    v7 += 4;
  }
  dword_60CC77FC(v11, v15);
  dword_60CC775C(v13, *a1);
  dword_60CC7760(v13, a1[1]);
  dword_60CC7764(v13, a1[88]);
  dword_60CC7768(v13, a1[3]);
  dword_60CC776C(v13, 3, a1[94]);
  dword_60CC7770(v13, 3, a1[91], a1[92], a1[93]);
  dword_60CC780C(v11, v13);
  if ( a1[3] )
  {
    dword_60CC78E4(v11, 3, *((_DWORD *)a1 + 9));
    dword_60CC78E8(v11, 3, 255);
    dword_60CC78EC(v11, 3, *((_DWORD *)a1 + 8));
  }
  dword_60CC7738(v12, a1[89]);
  dword_60CC773C(v12, 1);
  dword_60CC7740(v12, a1[95]);
  v9 = a1[97];
  if ( a1[97] )
    v9 = 4;
  dword_60CC7744(v12, v9);
  return dword_60CC7808(v11, v12);
}
