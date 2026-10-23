/* sub_607D61D4
 * address: 0x607D61D4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607D61D4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CC4B70 & ~(1618829804 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4B70) )
  {
    dword_60CC4B6C = (int)&off_60C23E58;
    _cxa_guard_release(&dword_60CC4B70);
  }
  if ( a2 == &dword_60CC4B6C )
    return 1;
  if ( ((unsigned int)dword_60CBEC98 & ~(1618829896 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CBEC98) )
    {
      dword_60CBEC94 = (int)&off_60BC00A4;
      _cxa_guard_release(dword_60CBEC98);
    }
  }
  return a2 == &dword_60CBEC94;
}
