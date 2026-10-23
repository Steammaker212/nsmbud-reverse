/* sub_608061B8
 * address: 0x608061B8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608061B8(int a1, int a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r0
  int v7; // r6
  int v8; // r9
  int v9; // r0
  _BYTE v11[88]; // [sp+0h] [bp-58h] BYREF

  v4 = sub_608065A0(a1) + 740;
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v7 = sub_608D1544(7, 2, v5, v6);
  v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 24))(a2, v7, 4);
  v9 = sub_608D1458(v11);
  sub_608D149C(v9, 7);
  sub_608D14A4(v11, 2);
  sub_608D14AC(v11, v4);
  sub_608D14B4(v11, 3, 0);
  sub_608D14B4(v11, 4, 0);
  sub_608D14B4(v11, 5, 0);
  sub_608D14B4(v11, 6, 0);
  sub_608D1A08(a1 + 196, v11, v8, v7);
  sub_608D2040(a1 + 196, v4);
  sub_608D2228(a1 + 196, 0, 0, 1.0);
  sub_608D2228(a1 + 196, 1, 0, 1.0);
  return sub_608D2228(a1 + 196, 2, 0, 1.0);
}
