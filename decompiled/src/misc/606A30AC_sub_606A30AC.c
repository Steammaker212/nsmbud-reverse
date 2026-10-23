/* sub_606A30AC
 * address: 0x606A30AC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606A30AC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB9A3C & ~(1617572036 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9A3C) )
  {
    dword_60CB9A38 = (int)&off_60C1906C;
    _cxa_guard_release(&dword_60CB9A3C);
  }
  if ( a2 == &dword_60CB9A38 )
    return 1;
  if ( ((unsigned int)dword_60CB99A8 & ~(1617572128 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB99A8) )
    {
      dword_60CB99A4 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60CB99A8);
    }
  }
  return a2 == &dword_60CB99A4 || sub_60027FB0(a2);
}
