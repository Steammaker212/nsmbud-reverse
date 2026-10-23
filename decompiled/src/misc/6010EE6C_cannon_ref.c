/* cannon_ref
 * address: 0x6010EE6C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cannon_ref(int a1)
{
  int v1; // r0
  int (__fastcall *v2)(int, _DWORD *); // r2
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v1 = **(_DWORD **)(a1 + 7096);
  v2 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v1 + 84);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "cannon";
  return v2(v1, v4);
}
