/* sub_6042D348
 * address: 0x6042D348   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042D348(_DWORD *a1, int a2)
{
  int v4; // r7
  char *v5; // r1
  char *v6; // r1
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r4
  _DWORD v11[12]; // [sp+0h] [bp-F8h] BYREF
  _DWORD v12[12]; // [sp+30h] [bp-C8h] BYREF
  _DWORD v13[38]; // [sp+60h] [bp-98h] BYREF

  v4 = *a1;
  sub_6091D95C(*a1);
  memset(v13, 0, 120);
  sub_6083D774(v13);
  LOWORD(v13[1]) = 0;
  v13[3] = 5381;
  v13[2] = 0;
  HIWORD(v13[0]) = **(char **)(v4 + 604);
  sub_6083D774(&v13[10]);
  LOWORD(v13[11]) = 1;
  v13[13] = 4613;
  v13[12] = 0;
  v5 = *(char **)(v4 + 604);
  if ( FIELD_U32(v4, 600) > 1u )
    v5 += 12;
  HIWORD(v13[10]) = *v5;
  sub_6083D774(&v13[20]);
  LOWORD(v13[21]) = 2;
  v13[23] = 3586;
  v13[22] = 0;
  v6 = *(char **)(v4 + 604);
  if ( FIELD_U32(v4, 600) > 2u )
    v6 += 24;
  HIWORD(v13[20]) = *v6;
  memset(v12, 0, sizeof(v12));
  sub_6083D798(v12);
  v12[0] = 8;
  sub_6083D798(&v12[4]);
  v12[4] = 4;
  sub_6083D798(&v12[8]);
  v12[8] = 4;
  memset(v11, 0, sizeof(v11));
  sub_6083D7A8(v11);
  v11[2] = v13;
  v11[0] = 196611;
  v11[4] = v12;
  v7 = sub_6083C978(v11);
  v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 24))(a2, v7, 8);
  a1[362] = v8;
  v9 = a1 + 354;
  sub_6083C9F4(v9, v8, v7);
  return sub_6083CA08(v9, FIELD_U32(dword_60CCFC8C, 24), v11, 0);
}
