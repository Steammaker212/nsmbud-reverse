/* sub_605B87D8
 * address: 0x605B87D8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605B87D8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB060C & ~(1616611312 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB060C) )
  {
    dword_60CB0608 = (int)&off_60C0970C;
    _cxa_guard_release(&dword_60CB060C);
  }
  if ( a2 == &dword_60CB0608 )
    return 1;
  if ( ((unsigned int)&dword_60CB0614 & ~(1616611404 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB0614) )
    {
      dword_60CB0610 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB0614);
    }
  }
  return a2 == &dword_60CB0610 || sub_60027FB0(a2);
}
