/* sub_6062B2E0
 * address: 0x6062B2E0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6062B2E0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB3E38 & ~(1617081080 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3E38) )
  {
    dword_60CB3E34 = (int)&off_60C0B7A4;
    _cxa_guard_release(&dword_60CB3E38);
  }
  if ( a2 == &dword_60CB3E34 )
    return 1;
  if ( ((unsigned int)&dword_60CB1D4C & ~(1617081172 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB1D4C) )
    {
      dword_60CB1D48 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB1D4C);
    }
  }
  return a2 == &dword_60CB1D48 || sub_60026DC8(a2);
}
