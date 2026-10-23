/* sub_60916FEC
 * address: 0x60916FEC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916FEC(_DWORD *a1, int *a2, int a3)
{
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r6
  __int64 v11; // r0
  _BYTE v13[192]; // [sp+10h] [bp-258h] BYREF
  int v14; // [sp+D0h] [bp-198h]
  _DWORD v15[6]; // [sp+1B8h] [bp-B0h] BYREF
  _BYTE v16[48]; // [sp+1D0h] [bp-98h] BYREF
  _BYTE v17[104]; // [sp+200h] [bp-68h] BYREF

  sub_60913B04(a2, FIELD_U32(a3, 40));
  dword_60CC7444(v17, a1[7]);
  dword_60CC7448(v17);
  dword_60CC744C(v17, *a2, a2[1], FIELD_U32(a3, 40));
  dword_60CC745C(v16, v17);
  memset(v15, 0, 12);
  v6 = FIELD_U16(a3, 24);
  if ( v6 <= 1 )
    v6 = 1;
  v15[3] = v6;
  v7 = sub_609200A0(a3);
  v8 = FIELD_U16(a3, 26);
  if ( v7 > v8 )
    v8 = v7;
  v15[4] = v8;
  v15[5] = 1;
  v9 = sub_60913508((int)v13);
  sub_60913814(v9);
  v10 = v14;
  v11 = dword_60CC746C(v16);
  dword_60CC7920(v10, a3 + 64, 0, v15, v11, HIDWORD(v11), 0);
  (*(void (__fastcall **)(_DWORD *, _BYTE *))(*a1 + 16))(a1, v13);
  sub_6091361C((int)v13);
  dword_60CC7464(v16);
  sub_60913B5C(a2, FIELD_U32(a3, 40));
  return sub_60913598((int)v13);
}
