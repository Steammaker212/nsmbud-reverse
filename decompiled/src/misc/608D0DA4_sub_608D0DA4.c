/* sub_608D0DA4
 * address: 0x608D0DA4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D0DA4(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v9; // r4
  _DWORD *v10; // r1

  v9 = sub_608C3B10();
  v10 = (_DWORD *)sub_608C2698((int)v9, 36);
  v10[1] = 70;
  v10[4] = a3;
  v10[5] = a2;
  v10[6] = a4;
  v10[7] = a5;
  v10[8] = a1;
  sub_608C2C1C(v9, v10);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 12))(a1, 1);
  return 1;
}
