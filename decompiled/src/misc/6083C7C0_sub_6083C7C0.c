/* sub_6083C7C0
 * address: 0x6083C7C0   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083C7C0(int a1, int a2, unsigned __int8 *a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r10
  int v8; // r7
  int v9; // r0
  int v10; // r0
  int v11; // r10
  int v12; // r7
  int v13; // r0
  int result; // r0

  FIELD_U16(a1, 26) = *((_WORD *)a3 + 2);
  dword_60CC7758(a1);
  dword_60CC775C(a1, *((_WORD *)a3 + 2) & 1);
  dword_60CC7760(a1, (*((unsigned __int16 *)a3 + 2) >> 1) & 1);
  dword_60CC7768(a1, (*((unsigned __int16 *)a3 + 2) >> 2) & 1);
  v5 = sub_6083AAB0(*a3);
  dword_60CC7764(a1, v5);
  v6 = sub_6083AAD8(a3[27]);
  dword_60CC776C(a1, 2, v6);
  v7 = sub_6083AAC4(a3[24]);
  v8 = sub_6083AAC4(a3[25]);
  v9 = sub_6083AAC4(a3[26]);
  dword_60CC7770(a1, 2, v7, v8, v9);
  v10 = sub_6083AAD8(a3[11]);
  dword_60CC776C(a1, 1, v10);
  v11 = sub_6083AAC4(a3[8]);
  v12 = sub_6083AAC4(a3[9]);
  v13 = sub_6083AAC4(a3[10]);
  dword_60CC7770(a1, 1, v11, v12, v13);
  FIELD_U32(a1, 16) = a3[28];
  FIELD_U32(a1, 20) = a3[12];
  FIELD_U32(a1, 8) = a3[1];
  result = a3[2];
  FIELD_U32(a1, 12) = result;
  FIELD_U8(a1, 24) = 1;
  return result;
}
