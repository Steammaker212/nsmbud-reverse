/* sub_608881DC
 * address: 0x608881DC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608881DC(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  _DWORD *v9; // r6
  int v10; // r0

  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  v9 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 4))(a1);
  return sub_6083568C(a2, 3, v8, v9, v10, 0, a3, a4);
}
