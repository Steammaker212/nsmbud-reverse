/* sub_6041C300
 * address: 0x6041C300   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041C300(_DWORD *a1, int a2, void *a3)
{
  int v6; // r8
  int v7; // r0
  int v8; // r10
  int v9; // r5
  _DWORD *v10; // r6
  int v11; // r1
  int v12; // r2
  int v13; // r8
  int v14; // r0
  int v15; // r6
  int v16; // r11
  int v17; // r5
  int v18; // r0
  int v20; // [sp+Ch] [bp-34h]
  _DWORD v21[12]; // [sp+10h] [bp-30h] BYREF

  v20 = dword_60C9BAF4;
  v6 = sub_6083DF44();
  v7 = sub_6083DF4C();
  a1[436] = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a3 + 24))(a3, v6, v7);
  v8 = sub_6083DF54(FIELD_U32(dword_60CCFC8C, 24));
  v9 = sub_6083DF58(FIELD_U32(dword_60CCFC8C, 24));
  v10 = (_DWORD *)operator_new_8DE25C(0x1Cu, a3, 4);
  sub_60913BB4(v10);
  *v10 = off_60BF9C1C;
  sub_60913D88((int)v10, v8, (int)a3, v9, 0);
  sub_60913A6C(v21, v10, 0);
  v11 = v21[1];
  v12 = v21[2];
  a1[510] = v21[0];
  a1[511] = v11;
  a1[512] = v12;
  sub_60913F34(a1[512], a1 + 438);
  sub_6083DF5C(a1 + 435, a1[436], v6, FIELD_U32(dword_60CCFC8C, 24), a1 + 438, a1[511], v8);
  v13 = FIELD_U32(dword_60CCFC8C, 24);
  v14 = sub_6083DC20(a1 + 35);
  v15 = FIELD_U32(a2, 16);
  v16 = v14;
  v17 = sub_6083DA30(a2);
  v18 = sub_6083DA20(a2);
  sub_6083E02C(a1 + 435, v13, v16, v20 + 192, v15 / 2, v17, v18);
  sub_6083E024(a1 + 435, a1 + 193);
  return sub_60913B04(a1 + 510, v8);
}
