/* sub_60285510
 * address: 0x60285510   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60285510(int a1)
{
  char v1; // r12
  int v3; // r5

  if ( ((unsigned int)&dword_60C7B37C & ~(1613255976 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v3 = 0;
  if ( a1 && (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C7B378) == 1 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1196))(a1, 8);
    v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1192))(a1);
    sub_6040A298(dword_60C9A1F0);
  }
  return v3;
}
