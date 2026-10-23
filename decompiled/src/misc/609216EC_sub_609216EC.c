/* sub_609216EC
 * address: 0x609216EC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609216EC(int a1, void *a2, int a3, int a4)
{
  int v7; // r8
  int v8; // r10
  int v9; // r5
  int v10; // r11
  _DWORD *v11; // r4
  int v13; // [sp+4h] [bp-44h]
  _DWORD v15[3]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v16[12]; // [sp+18h] [bp-30h] BYREF

  v7 = FIELD_U32(a1, 12);
  v13 = FIELD_U32(a1, 16);
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  v11 = (_DWORD *)operator_new_8DE25C(0x1Cu, a2, 4);
  sub_60913BB4((int)v11);
  *v11 = off_60BF9C1C;
  sub_60913D88((int)v11, ((v7 + v8 - 1) & -v9) + v13 * (a4 * a3 - 1), (int)a2, v10, 2);
  sub_60913A6C(v16, (int)v11, 0);
  FIELD_U8(a1, 38) |= 2u;
  v15[0] = v16[0];
  v15[1] = v16[1];
  v15[2] = v16[2];
  return sub_609217FC(a1, v15, a3, a4);
}
