/* sub_6034E85C
 * address: 0x6034E85C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6034E85C(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)dword_60C94CD0 & ~(1614080116 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C94CD0) )
  {
    dword_60C94CCC = (int)&off_60BC3210;
    _cxa_guard_release(dword_60C94CD0);
  }
  v4 = 1;
  if ( a2 != &dword_60C94CCC )
  {
    if ( ((unsigned int)&dword_60C803E8 & ~(1614080212 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803E8) )
    {
      dword_60C803E4 = (int)&off_60BC3188;
      _cxa_guard_release(&dword_60C803E8);
    }
    if ( a2 != &dword_60C803E4 )
    {
      if ( ((unsigned int)&dword_60C803D0 & ~(1614080304 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
      {
        dword_60C803CC = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C803D0);
      }
      return a2 == &dword_60C803CC;
    }
  }
  return v4;
}
