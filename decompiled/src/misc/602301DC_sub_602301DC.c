/* sub_602301DC
 * address: 0x602301DC   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602301DC(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C89674 & ~(1612906996 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C89674) )
  {
    dword_60C89670 = (int)&off_60BD5504;
    _cxa_guard_release(&dword_60C89674);
  }
  v4 = 1;
  if ( a2 != &dword_60C89670 )
  {
    if ( ((unsigned int)&dword_60C8967C & ~(1612907092 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8967C) )
    {
      dword_60C89678 = (int)&off_60BD5510;
      _cxa_guard_release(&dword_60C8967C);
    }
    if ( a2 != &dword_60C89678 )
    {
      if ( ((unsigned int)&dword_60C89684 & ~(1612907184 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C89684) )
      {
        dword_60C89680 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C89684);
      }
      return a2 == &dword_60C89680;
    }
  }
  return v4;
}
