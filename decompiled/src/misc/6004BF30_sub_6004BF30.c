/* sub_6004BF30
 * address: 0x6004BF30   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6004BF30(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C803E0 & ~(1610923848 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803E0) )
  {
    dword_60C803DC = (int)&off_60BC3210;
    _cxa_guard_release(&dword_60C803E0);
  }
  v4 = 1;
  if ( a2 != &dword_60C803DC )
  {
    if ( ((unsigned int)&dword_60C803E8 & ~(1610923944 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803E8) )
    {
      dword_60C803E4 = (int)&off_60BC3188;
      _cxa_guard_release(&dword_60C803E8);
    }
    if ( a2 != &dword_60C803E4 )
    {
      if ( ((unsigned int)&dword_60C803D0 & ~(1610924036 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
      {
        dword_60C803CC = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C803D0);
      }
      return a2 == &dword_60C803CC;
    }
  }
  return v4;
}
