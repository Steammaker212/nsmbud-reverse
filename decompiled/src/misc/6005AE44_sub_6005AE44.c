/* sub_6005AE44
 * address: 0x6005AE44   size: 1840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6005AE44(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C80CCC & ~(1610986496 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80CCC) )
  {
    dword_60C80CC8 = (int)&off_60BC5688;
    _cxa_guard_release(&dword_60C80CCC);
  }
  if ( a2 == &dword_60C80CC8 )
    return 1;
  if ( ((unsigned int)dword_60C80B30 & ~(1610986588 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C80B30) )
  {
    dword_60C80B2C = (int)&off_60BC4B48;
    _cxa_guard_release(dword_60C80B30);
  }
  if ( a2 == &dword_60C80B2C )
    return 1;
  if ( ((unsigned int)dword_60C80A14 & ~(1610986680 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C80A14) )
  {
    dword_60C80A10 = (int)&off_60BC45B8;
    _cxa_guard_release(dword_60C80A14);
  }
  if ( a2 == &dword_60C80A10 )
    return 1;
  if ( ((unsigned int)&dword_60C8057C & ~(1610986772 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8057C) )
    {
      dword_60C80578 = (int)&off_60BC3768;
      _cxa_guard_release(&dword_60C8057C);
    }
  }
  return a2 == &dword_60C80578 || sub_6004F7C8(a2);
}
