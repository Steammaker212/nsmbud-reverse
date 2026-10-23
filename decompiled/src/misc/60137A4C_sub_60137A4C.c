/* sub_60137A4C
 * address: 0x60137A4C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60137A4C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C878D8 & ~(1611889252 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C878D8) )
  {
    dword_60C878D4 = (int)&off_60BC7C24;
    _cxa_guard_release(&dword_60C878D8);
  }
  if ( a2 == &dword_60C878D4 )
    return 1;
  if ( ((unsigned int)&dword_60C823C4 & ~(1611889344 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C823C4) )
    {
      FireballBase_RTTI = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C823C4);
    }
  }
  return a2 == &FireballBase_RTTI || sub_60027FB0(a2);
}
