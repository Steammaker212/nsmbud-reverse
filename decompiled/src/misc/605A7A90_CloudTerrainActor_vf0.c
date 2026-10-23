/* CloudTerrainActor_vf0
 * address: 0x605A7A90   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall CloudTerrainActor_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB0098 & ~(1616542376 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0098) )
  {
    dword_60CB0094 = (int)&off_60BC8348;
    _cxa_guard_release(&dword_60CB0098);
  }
  if ( a2 == &dword_60CB0094 )
    return 1;
  if ( ((unsigned int)&dword_60C82850 & ~(1616542468 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C82850) )
    {
      dword_60C8284C = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C82850);
    }
  }
  return a2 == &dword_60C8284C || sub_60026DC8(a2);
}
