/* sub_605F64E8
 * address: 0x605F64E8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605F64E8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB2334 & ~(1616864512 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2334) )
  {
    dword_60CB2330 = (int)&off_60C075D4;
    _cxa_guard_release(&dword_60CB2334);
  }
  if ( a2 == &dword_60CB2330 )
    return 1;
  if ( ((unsigned int)dword_60CAF8F4 & ~(1616864604 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CAF8F4) )
    {
      dword_60CAF8F0 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CAF8F4);
    }
  }
  return a2 == &dword_60CAF8F0 || sub_60026DC8(a2);
}
