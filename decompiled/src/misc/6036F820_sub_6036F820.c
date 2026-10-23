/* sub_6036F820
 * address: 0x6036F820   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6036F820(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r6
  char v7; // r12
  int (__fastcall ***v8)(_DWORD, int *); // r7

  v6 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614215232 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
  {
    v8 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
    if ( ((unsigned int)&dword_60C95FFC & ~(1614215352 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C95FFC) )
    {
      dword_60C95FF8 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C95FFC);
    }
    if ( v8
      && (**v8)(v8, &dword_60C95FF8) == 1
      && !(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1156))(v6)
      && FIELD_U32(a3, 136) != 15 )
    {
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 1164))(v6, a2, a3);
    }
  }
}
