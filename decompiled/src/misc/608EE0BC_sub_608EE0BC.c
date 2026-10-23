/* sub_608EE0BC
 * address: 0x608EE0BC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608EE0BC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CC6BD8 & ~(1619976404 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BD8) )
  {
    dword_60CC6BD4 = (int)&off_60C2A1FC;
    _cxa_guard_release(&dword_60CC6BD8);
  }
  if ( a2 == &dword_60CC6BD4 )
    return 1;
  if ( ((unsigned int)&dword_60CC6BE0 & ~(1619976496 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC6BE0) )
    {
      dword_60CC6BDC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CC6BE0);
    }
  }
  return a2 == &dword_60CC6BDC;
}
