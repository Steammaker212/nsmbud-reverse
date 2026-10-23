/* sub_60554D9C
 * address: 0x60554D9C   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60554D9C(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  char v8; // r12
  int v12; // r11
  int v13; // r7
  int v14; // r7
  int v15; // r7
  int i; // r6
  int v17; // r5
  int v18; // r5
  _DWORD v21[11]; // [sp+4h] [bp-2Ch] BYREF

  *(_BYTE *)a1 = 1;
  if ( ((unsigned int)&dword_60CAD33C[2] & ~(1616203220 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD33C[2]) )
  {
    dword_60CAD348 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD34C = (int)"G_Info_00";
    _cxa_guard_release(&dword_60CAD33C[2]);
  }
  v12 = a7;
  v13 = sub_608DE1A4(0x1Cu);
  (*(void (__fastcall **)(int *))(dword_60CAD348 + 12))(&dword_60CAD348);
  sub_60855828(v13, dword_60CAD34C);
  FIELD_U32(a1, 4) = v13;
  v14 = sub_608DE1A4(0xF0u);
  sub_60860D30(v14, *a3, FIELD_U32(dword_60CCF464, 36));
  FIELD_U32(a1, 44) = v14;
  sub_60855928(FIELD_U32(a1, 4), v14);
  sub_608589FC(a6, FIELD_U32(a1, 44));
  v15 = sub_608DE1A4(0xF0u);
  sub_60860D30(v15, a3[1], FIELD_U32(dword_60CCF464, 36));
  FIELD_U32(a1, 48) = v15;
  sub_60855928(FIELD_U32(a1, 4), v15);
  sub_608589FC(a6, FIELD_U32(a1, 48));
  for ( i = 0; i != 9; ++i )
  {
    v17 = sub_608DE1A4(0xD0u);
    sub_6085A1FC(v17, *(_DWORD *)(a2 + 4 * i), FIELD_U32(dword_60CCF464, 36));
    *(_DWORD *)(a1 + 8 + 4 * i) = v17;
    sub_60855928(FIELD_U32(a1, 4), v17);
  }
  sub_608589FC(a6, FIELD_U32(a1, 8));
  sub_608589FC(a6, FIELD_U32(a1, 12));
  sub_608589FC(a6, FIELD_U32(a1, 16));
  sub_608589FC(a6, FIELD_U32(a1, 20));
  sub_608589FC(a6, FIELD_U32(a1, 24));
  sub_608589FC(a6, FIELD_U32(a1, 28));
  sub_608589FC(FIELD_U32(a1, 20), FIELD_U32(a1, 32));
  sub_608589FC(FIELD_U32(a1, 24), FIELD_U32(a1, 36));
  sub_608589FC(FIELD_U32(a1, 28), FIELD_U32(a1, 40));
  v18 = sub_608DE1A4(0x110u);
  LetterAnimOn_ref_98530C(v18, a4, a8);
  if ( a7 == -1 )
    v12 = 0;
  v21[0] = &sead__SafeStringBase__vtable;
  v21[1] = "StarCoinListWin_CourseNum_00";
  sub_6047E0EC(v21, v18, 1, v12, a4);
  sub_60855928(FIELD_U32(a1, 4), v18);
  sub_608589FC(a6, v18);
  sub_608503F8(a1 + 52, FIELD_U32(dword_60CCF464, 36), FIELD_U32(a8, 36), FIELD_U32(a5, 12));
  sub_60850940(a1 + 52, FIELD_U32(a1, 4));
  return sub_608502F4(a1 + 52, 0);
}
