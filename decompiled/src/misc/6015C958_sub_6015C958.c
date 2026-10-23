/* sub_6015C958
 * address: 0x6015C958   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6015C958(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C88A48 & ~(1612040560 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A48) )
  {
    dword_60C88A44 = (int)&off_60BC3188;
    _cxa_guard_release(&dword_60C88A48);
  }
  if ( a2 == &dword_60C88A44 )
    return 1;
  if ( ((unsigned int)&dword_60C803D0 & ~(1612040652 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C803D0) )
    {
      dword_60C803CC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C803D0);
    }
  }
  return a2 == &dword_60C803CC;
}
