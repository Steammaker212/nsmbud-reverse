/* sub_606738EC
 * address: 0x606738EC   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606738EC(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CB7618 & ~(1617377540 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7618) )
  {
    dword_60CB7614 = (int)&off_60BC317C;
    _cxa_guard_release(&dword_60CB7618);
  }
  v4 = 1;
  if ( a2 != &dword_60CB7614 )
  {
    if ( ((unsigned int)&dword_60C803C8 & ~(1617377636 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803C8) )
    {
      dword_60C803C4 = (int)&off_60BC3188;
      _cxa_guard_release(&dword_60C803C8);
    }
    if ( a2 != &dword_60C803C4 )
    {
      if ( ((unsigned int)&dword_60C803D0 & ~(1617377728 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
      {
        dword_60C803CC = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C803D0);
      }
      return a2 == &dword_60C803CC;
    }
  }
  return v4;
}
