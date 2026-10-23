/* sub_6022F460
 * address: 0x6022F460   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6022F460(int *a1)
{
  char v1; // r12
  int v3; // r5

  if ( ((unsigned int)&dword_60C8D810 & ~(1612903544 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D810) )
  {
    dword_60C8D80C = (int)&off_60BD5504;
    _cxa_guard_release(&dword_60C8D810);
  }
  v3 = 1;
  if ( a1 != &dword_60C8D80C )
  {
    if ( ((unsigned int)&dword_60C8967C & ~(1612903640 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8967C) )
    {
      dword_60C89678 = (int)&off_60BD5510;
      _cxa_guard_release(&dword_60C8967C);
    }
    if ( a1 != &dword_60C89678 )
    {
      if ( ((unsigned int)&dword_60C89684 & ~(1612903732 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C89684) )
      {
        dword_60C89680 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C89684);
      }
      return a1 == &dword_60C89680;
    }
  }
  return v3;
}
