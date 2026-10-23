/* sub_60144370
 * address: 0x60144370   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60144370(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C87FA4 & ~(1611940744 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C87FA4) )
  {
    dword_60C87FA0 = (int)&off_60BC7C30;
    _cxa_guard_release(&dword_60C87FA4);
  }
  if ( a2 == &dword_60C87FA0 )
    return 1;
  if ( ((unsigned int)&dword_60C823D4 & ~(1611940836 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C823D4) )
    {
      dword_60C823D0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C823D4);
    }
  }
  return a2 == &dword_60C823D0 || sub_60027FB0(a2);
}
