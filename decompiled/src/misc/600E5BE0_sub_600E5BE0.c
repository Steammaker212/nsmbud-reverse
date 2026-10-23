/* sub_600E5BE0
 * address: 0x600E5BE0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600E5BE0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C84B5C & ~(1611553784 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B5C) )
  {
    dword_60C84B58 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B5C);
  }
  if ( a2 == &dword_60C84B58 )
    return 1;
  if ( ((unsigned int)&dword_60C84B54 & ~(1611553876 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C84B54) )
    {
      dword_60C84B50 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C84B54);
    }
  }
  return a2 == &dword_60C84B50 || sub_60027FB0(a2);
}
