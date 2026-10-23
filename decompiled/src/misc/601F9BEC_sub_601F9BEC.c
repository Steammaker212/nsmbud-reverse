/* sub_601F9BEC
 * address: 0x601F9BEC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601F9BEC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8BEE0 & ~(1612684292 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8BEE0) )
  {
    dword_60C8BEDC = (int)&off_60BD6B64;
    _cxa_guard_release(dword_60C8BEE0);
  }
  if ( a2 == &dword_60C8BEDC )
    return 1;
  if ( ((unsigned int)&dword_60C8AE9C & ~(1612684384 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8AE9C) )
    {
      dword_60C8AE98 = (int)&off_60BD4E08;
      _cxa_guard_release(&dword_60C8AE9C);
    }
  }
  return a2 == &dword_60C8AE98 || sub_60174850(a2);
}
