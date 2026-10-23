/* sub_60888168
 * address: 0x60888168   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60888168(int a1, int a2, int a3)
{
  int v6; // r7
  _DWORD *v7; // r5
  int v8; // r0

  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  v7 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 4))(a1);
  return sub_6083568C(a2, 3, v6, v7, v8, 0, a3, 0);
}
