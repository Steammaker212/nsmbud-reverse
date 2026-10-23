/* sub_60578B1C
 * address: 0x60578B1C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60578B1C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAECC0 & ~(1616350212 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAECC0) )
  {
    dword_60CAECBC = (int)&off_60BD48EC;
    _cxa_guard_release(&dword_60CAECC0);
  }
  if ( a2 == &dword_60CAECBC )
    return 1;
  if ( ((unsigned int)&dword_60C88A60 & ~(1616350304 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A60) )
  {
    dword_60C88A5C = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60C88A60);
  }
  if ( a2 == &dword_60C88A5C )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1616350396 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616350488 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  return a2 == &dword_60C7B380 || sub_60026DC8(a2);
}
