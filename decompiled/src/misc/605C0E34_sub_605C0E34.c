/* sub_605C0E34
 * address: 0x605C0E34   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605C0E34(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB0A00 & ~(1616645708 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0A00) )
  {
    dword_60CB09FC = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60CB0A00);
  }
  if ( a2 == &dword_60CB09FC )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616645800 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  return a2 == &dword_60C7B380 || sub_60026DC8(a2);
}
