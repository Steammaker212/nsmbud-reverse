/* sub_6090AAF4
 * address: 0x6090AAF4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6090AAF4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCF450 & ~(1620093708 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCF450) )
  {
    dword_60CCF44C = (int)&off_60BFAD80;
    _cxa_guard_release(&dword_60CCF450);
  }
  if ( a2 == &dword_60CCF44C )
    return 1;
  if ( ((unsigned int)&dword_60C9CD14 & ~(1620093800 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9CD14) )
    {
      dword_60C9CD10 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9CD14);
    }
  }
  return a2 == &dword_60C9CD10;
}
