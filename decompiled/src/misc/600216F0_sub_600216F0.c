/* sub_600216F0
 * address: 0x600216F0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600216F0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7F524 & ~(1610749704 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F524) )
  {
    dword_60C7F520 = (int)&off_60BC1480;
    _cxa_guard_release(&dword_60C7F524);
  }
  if ( a2 == &dword_60C7F520 )
    return 1;
  if ( ((unsigned int)&dword_60C7F51C & ~(1610749796 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7F51C) )
    {
      dword_60C7F518 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C7F51C);
    }
  }
  return a2 == &dword_60C7F518;
}
