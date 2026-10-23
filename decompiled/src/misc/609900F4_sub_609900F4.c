/* sub_609900F4
 * address: 0x609900F4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609900F4(int a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  int *v5; // r0

  if ( ((unsigned int)&dword_60CD0BB4 & ~(1620640012 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BB4) )
  {
    if ( ((unsigned int)&dword_60C9D9EC & ~(1620640052 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9EC) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1620640092 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60C9D9E8 = (int)&dword_60C9D9D0;
      _cxa_guard_release(&dword_60C9D9EC);
    }
    dword_60CD0BB0 = (int)&dword_60C9D9E8;
    _cxa_guard_release(&dword_60CD0BB4);
  }
  if ( !a1 )
    return 0;
  v5 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( !v5 )
    return 0;
  while ( v5 != &dword_60CD0BB0 )
  {
    v5 = (int *)*v5;
    if ( !v5 )
      return 0;
  }
  return a1;
}
