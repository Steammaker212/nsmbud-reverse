/* sub_605299D4
 * address: 0x605299D4   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605299D4(int *a1, int a2, int *a3, int a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r7
  int v10; // r7
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r6

  if ( FIELD_U8(dword_60C99DEC, 522) )
  {
    sub_6052A1C4(a1, a2, a3);
  }
  else
  {
    v7 = sub_608DE1A4(0xB0u);
    a1[9] = sub_6085852C(v7, a3[1]);
    v8 = sub_608DE1A4(0xB0u);
    sub_6085852C(v8, a3[2]);
    sub_608589FC(a1[9], v8);
    sub_6052A250(a1, v8, a3[2]);
  }
  *(_BYTE *)(a1[9] + 64) |= 1u;
  sub_608589FC(*a3, a1[9]);
  v9 = sub_608DE1A4(0xD0u);
  sub_6085A1FC(v9, a3[5], FIELD_U32(dword_60CCF464, 36));
  sub_608589FC(a1[9], v9);
  sub_6052A250(a1, v9, a3[5]);
  v10 = sub_608DE1A4(0x110u);
  LetterAnimOn_ref_98530C(v10, a3[6], a4);
  a1[10] = v10;
  sub_608589FC(a1[9], v10);
  sub_6047E0EC(&dword_60CAA27C, a1[10], 1, 0);
  v11 = operator_new(0x34u);
  v12 = (_DWORD *)sub_608523B8(v11);
  *v12 = off_60C346CC;
  v12[12] = 0;
  a1[11] = (int)v12;
  v13 = operator_new(0x34u);
  v14 = (_DWORD *)sub_608523B8(v13);
  *v14 = off_60C346CC;
  v14[12] = 0;
  a1[12] = (int)v14;
  v15 = FIELD_U32(a4, 36);
  sub_6090B310(dword_60CCF464);
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)a1[11] + 32))(
    a1[11],
    FIELD_U32(dword_60CCF464, 36),
    v15,
    a3[7]);
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)a1[12] + 32))(
    a1[12],
    FIELD_U32(dword_60CCF464, 36),
    v15,
    a3[7]);
  sub_6090B32C(dword_60CCF464);
  sub_6085277C(a1[11], a1[10], 1);
  return sub_6085277C(a1[12], a1[9], 1);
}
