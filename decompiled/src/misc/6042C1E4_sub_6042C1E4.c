/* sub_6042C1E4
 * address: 0x6042C1E4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6042C1E4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C80410 & ~(1614987772 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80410) )
  {
    dword_60C8040C = (int)&off_60BC3240;
    _cxa_guard_release(&dword_60C80410);
  }
  if ( a2 == &dword_60C8040C )
    return 1;
  if ( ((unsigned int)&dword_60C80418 & ~(1614987864 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C80418) )
    {
      dword_60C80414 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C80418);
    }
  }
  return a2 == &dword_60C80414;
}
