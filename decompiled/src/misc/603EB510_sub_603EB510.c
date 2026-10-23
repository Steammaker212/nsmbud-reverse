/* sub_603EB510
 * address: 0x603EB510   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603EB510(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C995E8 & ~(1614722344 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C995E8) )
  {
    dword_60C995E4 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995E8);
  }
  if ( a2 == &dword_60C995E4 )
    return 1;
  if ( ((unsigned int)&dword_60C8D91C & ~(1614722436 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8D91C) )
    {
      dword_60C8D918 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C8D91C);
    }
  }
  return a2 == &dword_60C8D918;
}
