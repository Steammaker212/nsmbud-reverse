/* sub_605F5AB0
 * address: 0x605F5AB0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605F5AB0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB22B4 & ~(1616861896 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB22B4) )
  {
    dword_60CB22B0 = (int)&off_60C075D4;
    _cxa_guard_release(&dword_60CB22B4);
  }
  if ( a2 == &dword_60CB22B0 )
    return 1;
  if ( ((unsigned int)dword_60CAF8F4 & ~(1616861988 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CAF8F4) )
    {
      dword_60CAF8F0 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CAF8F4);
    }
  }
  return a2 == &dword_60CAF8F0 || sub_60026DC8(a2);
}
