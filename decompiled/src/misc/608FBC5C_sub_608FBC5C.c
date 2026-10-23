/* sub_608FBC5C
 * address: 0x608FBC5C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__guard *sub_608FBC5C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CCEF20 & ~(1620032624 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CCEF20) )
  {
    sead__CriticalSection__ctor((sead_IDisposer *)&dword_60CCEF20[2]);
    sub_60000288();
    _cxa_guard_release(dword_60CCEF20);
  }
  return &dword_60CCEF20[2];
}
