/* sub_60419720
 * address: 0x60419720   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60419720(int a1, int a2)
{
  int v4; // r7
  char *v5; // r1
  char *v6; // r1
  char *v7; // r1
  int v8; // r6
  int v9; // r0
  _DWORD v11[12]; // [sp+0h] [bp-130h] BYREF
  _DWORD v12[16]; // [sp+30h] [bp-100h] BYREF
  _DWORD v13[48]; // [sp+70h] [bp-C0h] BYREF

  v4 = FIELD_U32(a1, 224);
  sub_6091D95C(v4);
  memset(v13, 0, 160);
  sub_6083D774(v13);
  LOWORD(v13[1]) = 0;
  v13[3] = 5381;
  v13[2] = 0;
  HIWORD(v13[0]) = **(char **)(v4 + 604);
  sub_6083D774(&v13[10]);
  LOWORD(v13[11]) = 1;
  v13[13] = 3586;
  v13[12] = 0;
  v5 = *(char **)(v4 + 604);
  if ( FIELD_U32(v4, 600) > 1u )
    v5 += 12;
  HIWORD(v13[10]) = *v5;
  sub_6083D774(&v13[20]);
  LOWORD(v13[21]) = 2;
  v13[23] = 4613;
  v13[22] = 0;
  v6 = *(char **)(v4 + 604);
  if ( FIELD_U32(v4, 600) > 2u )
    v6 += 24;
  HIWORD(v13[20]) = *v6;
  sub_6083D774(&v13[30]);
  LOWORD(v13[31]) = 3;
  v13[33] = 2817;
  v13[32] = 0;
  v7 = *(char **)(v4 + 604);
  if ( FIELD_U32(v4, 600) > 3u )
    v7 += 36;
  HIWORD(v13[30]) = *v7;
  memset(v12, 0, sizeof(v12));
  sub_6083D798(v12);
  v12[0] = 8;
  sub_6083D798(&v12[4]);
  v12[4] = 4;
  sub_6083D798(&v12[8]);
  v12[8] = 4;
  sub_6083D798(&v12[12]);
  v12[12] = 4;
  memset(v11, 0, sizeof(v11));
  sub_6083D7A8(v11);
  v11[2] = v13;
  v11[0] = 262148;
  v11[4] = v12;
  v8 = sub_6083C978(v11);
  v9 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 24))(a2, v8, 8);
  FIELD_U32(a1, 456) = v9;
  sub_6083C9F4(a1 + 424, v9, v8);
  return sub_6083CA08(a1 + 424, FIELD_U32(dword_60CCFC8C, 24), v11, 0);
}
