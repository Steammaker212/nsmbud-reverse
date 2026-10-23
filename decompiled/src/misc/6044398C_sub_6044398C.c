/* sub_6044398C
 * address: 0x6044398C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6044398C(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C81748 & ~(1615084072 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81748) )
  {
    dword_60C81744 = (int)&off_60BC6E7C;
    _cxa_guard_release(&dword_60C81748);
  }
  v4 = 1;
  if ( a2 != &dword_60C81744 )
  {
    if ( ((unsigned int)&dword_60C81750 & ~(1615084168 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81750) )
    {
      dword_60C8174C = (int)&off_60BC6E88;
      _cxa_guard_release(&dword_60C81750);
    }
    if ( a2 != &dword_60C8174C )
    {
      if ( ((unsigned int)&dword_60C81758 & ~(1615084260 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81758) )
      {
        dword_60C81754 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C81758);
      }
      return a2 == &dword_60C81754;
    }
  }
  return v4;
}
