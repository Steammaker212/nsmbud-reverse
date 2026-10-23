/* switch_P_all_root_ref
 * address: 0x606E4054   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall switch_P_all_root_ref(int a1)
{
  _DWORD **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  _DWORD v7[4]; // [sp+0h] [bp-10h] BYREF

  v2 = *(int **)(a1 + 6104);
  v1 = (_DWORD **)(a1 + 6104);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "switch_P_all_root";
  v5 = v4(v3, v7);
  return (*(int (__fastcall **)(_DWORD, int, _DWORD **))(*(_DWORD *)**v1 + 108))(**v1, v5, v1 + 182);
}
