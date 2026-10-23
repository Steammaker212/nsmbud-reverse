/* PowBlock_vf0
 * address: 0x606BE4EC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall PowBlock_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CBA758 & ~(1617683716 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBA758) )
  {
    dword_60CBA754 = (int)&off_60BDE360;
    _cxa_guard_release(dword_60CBA758);
  }
  if ( a2 == &dword_60CBA754 )
    return 1;
  if ( ((unsigned int)&dword_60C8F38C & ~(1617683808 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F38C) )
  {
    dword_60C8F388 = (int)&off_60BDE36C;
    _cxa_guard_release(&dword_60C8F38C);
  }
  if ( a2 == &dword_60C8F388 )
    return 1;
  if ( ((unsigned int)&dword_60C8F394 & ~(1617683900 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8F394) )
    {
      dword_60C8F390 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C8F394);
    }
  }
  return a2 == &dword_60C8F390 || sub_60027FB0(a2);
}
