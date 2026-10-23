/* sub_60502790
 * address: 0x60502790   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502790(int a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  int *v5; // r0

  if ( ((unsigned int)&dword_60C9DA54 & ~(1615865768 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA54) )
  {
    if ( ((unsigned int)&dword_60C9DA2C & ~(1615865808 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA2C) )
    {
      if ( ((unsigned int)&dword_60C9DA34 & ~(1615865848 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA34) )
      {
        dword_60C9DA30 = 0;
        _cxa_guard_release(&dword_60C9DA34);
      }
      dword_60C9DA28 = (int)&dword_60C9DA30;
      _cxa_guard_release(&dword_60C9DA2C);
    }
    dword_60C9DA50 = (int)&dword_60C9DA28;
    _cxa_guard_release(&dword_60C9DA54);
  }
  if ( !a1 )
    return 0;
  v5 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 116))(a1);
  if ( !v5 )
    return 0;
  while ( v5 != &dword_60C9DA50 )
  {
    v5 = (int *)*v5;
    if ( !v5 )
      return 0;
  }
  return a1;
}
