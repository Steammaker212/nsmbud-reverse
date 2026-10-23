/* sub_606B85E8
 * address: 0x606B85E8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606B85E8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBA4E4 & ~(1617659392 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA4E4) )
  {
    dword_60CBA4E0 = (int)&off_60C1AF7C;
    _cxa_guard_release(&dword_60CBA4E4);
  }
  if ( a2 == &dword_60CBA4E0 )
    return 1;
  if ( ((unsigned int)&dword_60CBA464 & ~(1617659484 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CBA464) )
    {
      dword_60CBA460 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CBA464);
    }
  }
  return a2 == &dword_60CBA460 || sub_60026DC8(a2);
}
