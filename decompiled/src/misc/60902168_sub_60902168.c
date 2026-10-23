/* sub_60902168
 * address: 0x60902168   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60902168(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9BB2C & ~(1620058496 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
  {
    dword_60C9BB28 = (int)&off_60BF9F4C;
    _cxa_guard_release(&dword_60C9BB2C);
  }
  if ( a2 == &dword_60C9BB28 )
    return 1;
  if ( ((unsigned int)&dword_60C9BB34 & ~(1620058588 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9BB34) )
    {
      dword_60C9BB30 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9BB34);
    }
  }
  return a2 == &dword_60C9BB30;
}
