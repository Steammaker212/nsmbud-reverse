/* sub_60482EC0
 * address: 0x60482EC0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60482EC0(int a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  int *v5; // r0

  if ( ((unsigned int)&dword_60C9EFE8 & ~(1615343320 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EFE8) )
  {
    if ( ((unsigned int)&dword_60C9DA0C & ~(1615343360 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA0C) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1615343400 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60C9DA08 = (int)&dword_60C9D9D0;
      _cxa_guard_release(&dword_60C9DA0C);
    }
    dword_60C9EFE4 = (int)&dword_60C9DA08;
    _cxa_guard_release(&dword_60C9EFE8);
  }
  if ( !a1 )
    return 0;
  v5 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( !v5 )
    return 0;
  while ( v5 != &dword_60C9EFE4 )
  {
    v5 = (int *)*v5;
    if ( !v5 )
      return 0;
  }
  return a1;
}
