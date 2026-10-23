/* sub_608FBEA4
 * address: 0x608FBEA4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void sub_608FBEA4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CCEF20 & ~(1620033208 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CCEF20) )
  {
    sead__CriticalSection__ctor((sead_IDisposer *)&dword_60CCEF20[2]);
    sub_60000288();
    _cxa_guard_release(dword_60CCEF20);
  }
  if ( ((unsigned int)&dword_60CCEF20[1] & ~(1620033304 << v0) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CCEF20[1]) )
    {
      sead__CriticalSection__ctor((sead_IDisposer *)&dword_60CCEF20[11]);
      sub_60000288();
      _cxa_guard_release(&dword_60CCEF20[1]);
    }
  }
}
