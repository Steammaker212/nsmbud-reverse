/* sub_6019385C
 * address: 0x6019385C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6019385C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C89A44 & ~(1612265588 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C89A44) )
  {
    dword_60C89A40 = (int)&off_60BD5A64;
    _cxa_guard_release(&dword_60C89A44);
  }
  if ( a2 == &dword_60C89A40 )
    return 1;
  if ( ((unsigned int)&dword_60C89A4C & ~(1612265680 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C89A4C) )
    {
      dword_60C89A48 = (int)&off_60BD4E08;
      _cxa_guard_release(&dword_60C89A4C);
    }
  }
  return a2 == &dword_60C89A48 || sub_60174850(a2);
}
