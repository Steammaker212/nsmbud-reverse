/* sub_608F9418
 * address: 0x608F9418   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608F9418(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEE80 & ~(1620022320 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEE80) )
  {
    dword_60CCEE7C = (int)&off_60C5C940;
    _cxa_guard_release(&dword_60CCEE80);
  }
  if ( a2 == &dword_60CCEE7C )
    return 1;
  if ( ((unsigned int)&dword_60CCEE78 & ~(1620022412 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CCEE78) )
    {
      dword_60CCEE74 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CCEE78);
    }
  }
  return a2 == &dword_60CCEE74;
}
