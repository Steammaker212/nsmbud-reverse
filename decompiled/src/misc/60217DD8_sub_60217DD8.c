/* sub_60217DD8
 * address: 0x60217DD8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60217DD8(int a1, _DWORD *a2)
{
  char v2; // r12
  int v5; // r5
  int v6; // r0
  int result; // r0
  _DWORD v8[11]; // [sp+0h] [bp-40h] BYREF
  int v9; // [sp+2Ch] [bp-14h]

  if ( ((unsigned int)&dword_60C8D2D0[2] & ~(1612807676 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D2D0[2]) )
  {
    dword_60C8D2DC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D2E0 = (int)"bend1";
    _cxa_guard_release(&dword_60C8D2D0[2]);
  }
  v5 = **(_DWORD **)(a1 + 276);
  v6 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60C8D2DC);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 108))(v5, v6, v8);
  *a2 = v8[3];
  a2[1] = v8[7];
  result = v9;
  a2[2] = v9;
  return result;
}
