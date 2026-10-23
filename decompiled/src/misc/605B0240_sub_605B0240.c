/* sub_605B0240
 * address: 0x605B0240   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605B0240(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB0334 & ~(1616577112 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0334) )
  {
    dword_60CB0330 = (int)&off_60C08D58;
    _cxa_guard_release(&dword_60CB0334);
  }
  if ( a2 == &dword_60CB0330 )
    return 1;
  if ( ((unsigned int)&dword_60CB02AC & ~(1616577204 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB02AC) )
  {
    dword_60CB02A8 = (int)&off_60C08AD0;
    _cxa_guard_release(&dword_60CB02AC);
  }
  if ( a2 == &dword_60CB02A8 )
    return 1;
  if ( ((unsigned int)&dword_60CB02B4 & ~(1616577296 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB02B4) )
    {
      dword_60CB02B0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB02B4);
    }
  }
  return a2 == &dword_60CB02B0 || sub_60027FB0(a2);
}
