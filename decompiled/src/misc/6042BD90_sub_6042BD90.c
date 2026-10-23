/* sub_6042BD90
 * address: 0x6042BD90   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042BD90(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r6
  int v5; // r6
  int v6; // r6
  int v7; // r6
  int v8; // r6
  int result; // r0
  _DWORD v10[3]; // [sp+4h] [bp-44h] BYREF
  _BYTE v11[12]; // [sp+10h] [bp-38h] BYREF
  _DWORD v12[11]; // [sp+1Ch] [bp-2Ch] BYREF

  v2 = a1 + 732;
  sub_60913D88(a1 + 732, 24, 0, 4, 0);
  sub_60913A6C(v11, v2, 0);
  v3 = dword_60CC73E8(FIELD_U32(a1, 744));
  *(_DWORD *)(v3 + sub_60913FB4(v2)) = 0;
  v4 = dword_60CC73E8(FIELD_U32(a1, 744));
  *(_DWORD *)(v4 + sub_60913FB4(v2) + 4) = 1;
  v5 = dword_60CC73E8(FIELD_U32(a1, 744));
  *(_DWORD *)(v5 + sub_60913FB4(v2) + 8) = 2;
  v6 = dword_60CC73E8(FIELD_U32(a1, 744));
  *(_DWORD *)(v6 + sub_60913FB4(v2) + 12) = 2;
  v7 = dword_60CC73E8(FIELD_U32(a1, 744));
  *(_DWORD *)(v7 + sub_60913FB4(v2) + 16) = 3;
  v8 = dword_60CC73E8(FIELD_U32(a1, 744));
  *(_DWORD *)(v8 + sub_60913FB4(v2) + 20) = 0;
  sub_60913A6C(v10, v2, 0);
  v12[0] = v10[0];
  v12[1] = v10[1];
  v12[2] = v10[2];
  result = sub_60919D48(a1 + 624, v12, 2, 6);
  FIELD_U32(a1, 632) = 4;
  return result;
}
