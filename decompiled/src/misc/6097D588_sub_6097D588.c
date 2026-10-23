/* sub_6097D588
 * address: 0x6097D588   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097D588(int a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  int *v5; // r0

  if ( ((unsigned int)&dword_60CD0BA4 & ~(1620563360 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BA4) )
  {
    if ( ((unsigned int)&dword_60C9D9CC & ~(1620563400 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9CC) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1620563440 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60C9D9C8 = (int)&dword_60C9D9D0;
      _cxa_guard_release(&dword_60C9D9CC);
    }
    dword_60CD0BA0 = (int)&dword_60C9D9C8;
    _cxa_guard_release(&dword_60CD0BA4);
  }
  if ( !a1 )
    return 0;
  v5 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( !v5 )
    return 0;
  while ( v5 != &dword_60CD0BA0 )
  {
    v5 = (int *)*v5;
    if ( !v5 )
      return 0;
  }
  return 1;
}
