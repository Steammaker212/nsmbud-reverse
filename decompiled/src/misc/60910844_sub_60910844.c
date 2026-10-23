/* sub_60910844
 * address: 0x60910844   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60910844(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCFAFC & ~(1620117596 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCFAFC) )
  {
    dword_60CCFAF8 = (int)&off_60C2A1D8;
    _cxa_guard_release(&dword_60CCFAFC);
  }
  if ( a2 == &dword_60CCFAF8 )
    return 1;
  if ( ((unsigned int)&dword_60CC6BB8 & ~(1620117688 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC6BB8) )
    {
      dword_60CC6BB4 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CC6BB8);
    }
  }
  return a2 == &dword_60CC6BB4;
}
