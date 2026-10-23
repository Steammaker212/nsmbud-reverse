/* sub_608E1A48
 * address: 0x608E1A48   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608E1A48(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9CF00 & ~(1619925600 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF00) )
  {
    dword_60C9CEFC = (int)&off_60BFB100;
    _cxa_guard_release(&dword_60C9CF00);
  }
  if ( a2 == &dword_60C9CEFC )
    return 1;
  if ( ((unsigned int)&dword_60C9CEF8 & ~(1619925692 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9CEF8) )
    {
      dword_60C9CEF4 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9CEF8);
    }
  }
  return a2 == &dword_60C9CEF4;
}
