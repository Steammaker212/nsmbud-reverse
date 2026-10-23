/* sub_606C0C9C
 * address: 0x606C0C9C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606C0C9C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBA908 & ~(1617693876 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA908) )
  {
    dword_60CBA904 = (int)&off_60C0AB94;
    _cxa_guard_release(&dword_60CBA908);
  }
  if ( a2 == &dword_60CBA904 )
    return 1;
  if ( ((unsigned int)&dword_60CB1080 & ~(1617693968 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB1080) )
    {
      dword_60CB107C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB1080);
    }
  }
  return a2 == &dword_60CB107C || sub_60027FB0(a2);
}
