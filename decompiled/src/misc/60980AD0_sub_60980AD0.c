/* sub_60980AD0
 * address: 0x60980AD0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_60980AD0(int (__fastcall ***a1)(_DWORD)))(_DWORD)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  int *v5; // r0

  if ( ((unsigned int)&dword_60CD0BDC & ~(1620577000 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BDC) )
  {
    if ( ((unsigned int)&dword_60CC7F24 & ~(1620577040 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F24) )
    {
      if ( ((unsigned int)&dword_60CC7F1C & ~(1620577080 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F1C) )
      {
        dword_60CC7F18 = 0;
        _cxa_guard_release(&dword_60CC7F1C);
      }
      dword_60CC7F20 = (int)&dword_60CC7F18;
      _cxa_guard_release(&dword_60CC7F24);
    }
    dword_60CD0BD8 = (int)&dword_60CC7F20;
    _cxa_guard_release(&dword_60CD0BDC);
  }
  if ( !a1 )
    return 0;
  v5 = (int *)(**a1)(a1);
  if ( !v5 )
    return 0;
  while ( v5 != &dword_60CD0BD8 )
  {
    v5 = (int *)*v5;
    if ( !v5 )
      return 0;
  }
  return a1;
}
