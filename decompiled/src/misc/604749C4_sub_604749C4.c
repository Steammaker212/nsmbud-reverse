/* sub_604749C4
 * address: 0x604749C4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604749C4(int a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  int *v5; // r0

  if ( ((unsigned int)&dword_60C9D9DC & ~(1615284700 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9DC) )
  {
    if ( ((unsigned int)&dword_60C9D9E4 & ~(1615284740 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9E4) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1615284780 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60C9D9E0 = (int)&dword_60C9D9D0;
      _cxa_guard_release(&dword_60C9D9E4);
    }
    dword_60C9D9D8 = (int)&dword_60C9D9E0;
    _cxa_guard_release(&dword_60C9D9DC);
  }
  if ( !a1 )
    return 0;
  v5 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( !v5 )
    return 0;
  while ( v5 != &dword_60C9D9D8 )
  {
    v5 = (int *)*v5;
    if ( !v5 )
      return 0;
  }
  return a1;
}
