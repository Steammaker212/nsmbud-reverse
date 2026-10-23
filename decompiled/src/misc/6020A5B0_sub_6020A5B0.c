/* sub_6020A5B0
 * address: 0x6020A5B0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6020A5B0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8CA44 & ~(1612752328 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8CA44) )
  {
    dword_60C8CA40 = (int)&off_60BD60CC;
    _cxa_guard_release(dword_60C8CA44);
  }
  if ( a2 == &dword_60C8CA40 )
    return 1;
  if ( ((unsigned int)&dword_60C8A25C & ~(1612752420 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8A25C) )
    {
      dword_60C8A258 = (int)&off_60BD4EC8;
      _cxa_guard_release(&dword_60C8A25C);
    }
  }
  return a2 == &dword_60C8A258 || sub_601767E8(a2);
}
