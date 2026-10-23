/* sub_605A731C
 * address: 0x605A731C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605A731C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB0078 & ~(1616540468 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0078) )
  {
    dword_60CB0074 = (int)&off_60BC8348;
    _cxa_guard_release(&dword_60CB0078);
  }
  if ( a2 == &dword_60CB0074 )
    return 1;
  if ( ((unsigned int)&dword_60C82850 & ~(1616540560 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C82850) )
    {
      dword_60C8284C = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C82850);
    }
  }
  return a2 == &dword_60C8284C || sub_60026DC8(a2);
}
