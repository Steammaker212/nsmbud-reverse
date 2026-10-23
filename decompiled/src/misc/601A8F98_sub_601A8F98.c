/* sub_601A8F98
 * address: 0x601A8F98   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_601A8F98(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  _DWORD v6[11]; // [sp+0h] [bp-38h] BYREF

  v2 = **(_DWORD **)(a1 + 268);
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "broom";
  v4 = v3(v2, v6);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 268) + 108))(**(_DWORD **)(a1 + 268), v4, v6);
  return COERCE_DOUBLE(__PAIR64__(v6[7], v6[3]));
}
