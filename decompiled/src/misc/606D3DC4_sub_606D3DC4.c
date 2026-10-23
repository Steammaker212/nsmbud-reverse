/* sub_606D3DC4
 * address: 0x606D3DC4   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606D3DC4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CBB600 & ~(1617772204 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBB600) )
  {
    dword_60CBB5FC = (int)&off_60C012E8;
    _cxa_guard_release(dword_60CBB600);
  }
  if ( a2 == &dword_60CBB5FC )
    return 1;
  if ( ((unsigned int)&dword_60CAE2F4 & ~(1617772296 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE2F4) )
  {
    dword_60CAE2F0 = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60CAE2F4);
  }
  if ( a2 == &dword_60CAE2F0 )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1617772388 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1617772480 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  return a2 == &dword_60C7B380 || sub_60026DC8(a2);
}
