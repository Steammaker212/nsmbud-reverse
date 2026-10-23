/* sub_60149DD8
 * address: 0x60149DD8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60149DD8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C881F4 & ~(1611963888 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C881F4) )
  {
    dword_60C881F0 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C881F4);
  }
  if ( a2 == &dword_60C881F0 )
    return 1;
  if ( ((unsigned int)&dword_60C87670 & ~(1611963980 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C87670) )
    {
      dword_60C8766C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C87670);
    }
  }
  return a2 == &dword_60C8766C || sub_60027FB0(a2);
}
