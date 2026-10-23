/* sub_601434B4
 * address: 0x601434B4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601434B4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C87EBC & ~(1611936972 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C87EBC) )
  {
    dword_60C87EB8 = (int)&off_60BC7C30;
    _cxa_guard_release(&dword_60C87EBC);
  }
  if ( a2 == &dword_60C87EB8 )
    return 1;
  if ( ((unsigned int)&dword_60C823D4 & ~(1611937064 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C823D4) )
    {
      dword_60C823D0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C823D4);
    }
  }
  return a2 == &dword_60C823D0 || sub_60027FB0(a2);
}
