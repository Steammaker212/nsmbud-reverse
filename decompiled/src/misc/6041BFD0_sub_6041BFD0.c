/* sub_6041BFD0
 * address: 0x6041BFD0   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041BFD0(_DWORD *a1, int a2, void *a3)
{
  int v5; // r9
  int v6; // r0
  int v7; // r10
  int v8; // r11
  _DWORD *v9; // r7
  int v10; // r1
  int v11; // r2
  _DWORD v14[12]; // [sp+20h] [bp-30h] BYREF

  v5 = sub_6083DE38();
  v6 = sub_6083DE40();
  a1[194] = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a3 + 24))(a3, v5, v6);
  v7 = sub_6083DE48(FIELD_U32(dword_60CCFC8C, 24), dword_60C9BAF4 + 32);
  v8 = sub_6083DE4C(FIELD_U32(dword_60CCFC8C, 24), dword_60C9BAF4 + 32);
  v9 = (_DWORD *)operator_new_8DE25C(0x1Cu, a3, 4);
  sub_60913BB4(v9);
  *v9 = off_60BF9C1C;
  sub_60913D88((int)v9, v7, (int)a3, v8, 0);
  sub_60913A6C(v14, v9, 0);
  v10 = v14[1];
  v11 = v14[2];
  a1[268] = v14[0];
  a1[269] = v10;
  a1[270] = v11;
  sub_60913F34(a1[270], a1 + 196);
  sub_6083DE50(
    a1 + 193,
    a1[194],
    v5,
    FIELD_U32(dword_60CCFC8C, 24),
    a1 + 196,
    a1[269],
    v7,
    a1[434],
    dword_60C9BAF4 + 32,
    a2,
    1);
  return MiiFacelineTexture_ref(a1);
}
