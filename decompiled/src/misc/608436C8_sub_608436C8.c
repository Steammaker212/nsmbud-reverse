/* sub_608436C8
 * address: 0x608436C8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608436C8(int a1, int a2, int *a3, unsigned __int8 *a4)
{
  int v8; // r0
  int v9; // r7
  _DWORD *v10; // r9
  int v11; // r0

  v8 = sub_6083CF64(a3, (int)a4);
  sub_60847820(a2, v8);
  v9 = sub_6083D1F4(a3, a4);
  v10 = (_DWORD *)sub_6084783C(a2);
  v11 = sub_60847844(a2);
  sub_6083D24C(a1, a3, a4, v10, v11, v9);
  return sub_6084784C(a2, v9);
}
