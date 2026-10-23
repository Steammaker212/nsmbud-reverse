/* sub_606B5C28
 * address: 0x606B5C28   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606B5C28(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBA45C & ~(1617648704 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA45C) )
  {
    dword_60CBA458 = (int)&off_60C1AF7C;
    _cxa_guard_release(&dword_60CBA45C);
  }
  if ( a2 == &dword_60CBA458 )
    return 1;
  if ( ((unsigned int)&dword_60CBA464 & ~(1617648796 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CBA464) )
    {
      dword_60CBA460 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CBA464);
    }
  }
  return a2 == &dword_60CBA460 || sub_60026DC8(a2);
}
