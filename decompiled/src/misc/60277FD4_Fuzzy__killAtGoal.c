/* Fuzzy__killAtGoal
 * address: 0x60277FD4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000EBC
// 
// Overridden by: None
int __fastcall Fuzzy__killAtGoal(int a1)
{
  _DWORD **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  unsigned __int8 v5; // r0
  _DWORD v7[14]; // [sp+0h] [bp-38h] BYREF

  v2 = *(int **)(a1 + 6300);
  v1 = (_DWORD **)(a1 + 6300);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "skl_root";
  v5 = v4(v3, v7);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v5, v7);
  return sub_60236DF4(594, v7, 0);
}
