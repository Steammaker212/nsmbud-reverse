/* sub_6041B974
 * address: 0x6041B974   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041B974(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r1
  int v10; // r2
  _DWORD *v11; // r7
  int v12; // r8
  int v13; // r6

  ((void (__fastcall *)(_DWORD *, _DWORD))loc_6083E424)(a1 + 515, *a2);
  a1[1098] = a2[16];
  a1[1099] = a2[17];
  a1[1100] = sub_608FBBD0(a1[349], a2[18]) - 1;
  v8 = a2[19];
  v9 = a2[20];
  v10 = a2[21];
  a1[1104] = a2[22];
  v11 = a2 + 14;
  a1[1103] = v10;
  a1[1102] = v9;
  a1[1101] = v8;
  sub_6041CE84(a1, a2 + 14, a3);
  sub_6041CF7C(a1, a2 + 14, a4);
  sub_6041D07C(a1);
  v12 = *a2;
  v13 = dword_60C9BAF4;
  sub_6092166C(a1 + 1106, dword_60C9BAF4 + 232);
  sub_609216EC(a1 + 1106, a4, 1, 2);
  sub_6092166C(a1 + 1130, v13 + 328);
  sub_609216EC(a1 + 1130, a4, 1, 10);
  return sub_6041D270(a1, v12, v11);
}
