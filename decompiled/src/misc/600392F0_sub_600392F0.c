/* sub_600392F0
 * address: 0x600392F0   size: 3088   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall sub_600392F0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C80040 & ~(1610849676 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80040) )
  {
    dword_60C8003C = (int)&off_60BC2CB4;
    _cxa_guard_release(&dword_60C80040);
  }
  if ( a2 == &dword_60C8003C )
    return 1;
  if ( ((unsigned int)&dword_60C80048 & ~(1610849768 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80048) )
  {
    dword_60C80044 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C80048);
  }
  if ( a2 == &dword_60C80044 )
    return 1;
  if ( ((unsigned int)&dword_60C7F664 & ~(1610849860 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F664) )
  {
    dword_60C7F660 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7F664);
  }
  if ( a2 == &dword_60C7F660 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1610849952 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
