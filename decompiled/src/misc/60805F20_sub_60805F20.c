/* sub_60805F20
 * address: 0x60805F20   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60805F20(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CC64B4 & ~(1619025720 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64B4) )
  {
    dword_60CC64B0 = (int)&off_60C28040;
    _cxa_guard_release(&dword_60CC64B4);
  }
  if ( a2 == &dword_60CC64B0 )
    return 1;
  if ( ((unsigned int)&dword_60CC64BC & ~(1619025812 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC64BC) )
    {
      dword_60CC64B8 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CC64BC);
    }
  }
  return a2 == &dword_60CC64B8;
}
