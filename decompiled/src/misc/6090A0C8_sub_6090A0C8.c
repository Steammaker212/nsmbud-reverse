/* sub_6090A0C8
 * address: 0x6090A0C8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6090A0C8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9CFC8 & ~(1620091104 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFC8) )
  {
    dword_60C9CFC4 = (int)&off_60BD84B4;
    _cxa_guard_release(&dword_60C9CFC8);
  }
  if ( a2 == &dword_60C9CFC4 )
    return 1;
  if ( ((unsigned int)&dword_60C8C234 & ~(1620091196 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8C234) )
    {
      dword_60C8C230 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C8C234);
    }
  }
  return a2 == &dword_60C8C230;
}
