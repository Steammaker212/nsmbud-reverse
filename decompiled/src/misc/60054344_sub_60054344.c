/* sub_60054344
 * address: 0x60054344   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60054344(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C807EC & ~(1610957660 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C807EC) )
  {
    dword_60C807E8 = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C807EC);
  }
  if ( a2 == &dword_60C807E8 )
    return 1;
  if ( ((unsigned int)&dword_60C7F710 & ~(1610957752 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7F710) )
    {
      dword_60C7F70C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7F710);
    }
  }
  return a2 == &dword_60C7F70C || sub_60027FB0(a2);
}
