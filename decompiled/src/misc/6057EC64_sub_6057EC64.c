/* sub_6057EC64
 * address: 0x6057EC64   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6057EC64(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAEF60 & ~(1616375116 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEF60) )
  {
    dword_60CAEF5C = (int)&off_60BD48EC;
    _cxa_guard_release(&dword_60CAEF60);
  }
  if ( a2 == &dword_60CAEF5C )
    return 1;
  if ( ((unsigned int)&dword_60C88A60 & ~(1616375208 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A60) )
  {
    dword_60C88A5C = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60C88A60);
  }
  if ( a2 == &dword_60C88A5C )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1616375300 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616375392 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  return a2 == &dword_60C7B380 || sub_60026DC8(a2);
}
