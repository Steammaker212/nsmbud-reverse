/* sub_6072C908
 * address: 0x6072C908   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6072C908(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBD940 & ~(1618135748 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD940) )
  {
    dword_60CBD93C = (int)&off_60BD48EC;
    _cxa_guard_release(&dword_60CBD940);
  }
  if ( a2 == &dword_60CBD93C )
    return 1;
  if ( ((unsigned int)&dword_60C88A60 & ~(1618135840 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A60) )
  {
    dword_60C88A5C = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60C88A60);
  }
  if ( a2 == &dword_60C88A5C )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1618135932 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1618136024 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  return a2 == &dword_60C7B380 || sub_60026DC8(a2);
}
