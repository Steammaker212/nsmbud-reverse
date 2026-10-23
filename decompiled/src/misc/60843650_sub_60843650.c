/* sub_60843650
 * address: 0x60843650   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60843650(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // r0
  _DWORD *v9; // r7
  int v10; // r0

  v8 = sub_608352A0(a3, (int)a4);
  sub_60847820(a2, v8);
  v9 = (_DWORD *)sub_6084783C(a2);
  v10 = sub_60847844(a2);
  sub_608353C0(a1, a3, a4, v9, v10);
  return sub_6084784C(a2, *a4);
}
