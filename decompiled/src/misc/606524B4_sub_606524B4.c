/* sub_606524B4
 * address: 0x606524B4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606524B4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB62B0 & ~(1617241292 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB62B0) )
  {
    dword_60CB62AC = (int)&off_60C14188;
    _cxa_guard_release(&dword_60CB62B0);
  }
  if ( a2 == &dword_60CB62AC )
    return 1;
  if ( ((unsigned int)&dword_60CB62B8 & ~(1617241384 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB62B8) )
    {
      dword_60CB62B4 = (int)&off_60BCFCD8;
      _cxa_guard_release(&dword_60CB62B8);
    }
  }
  return a2 == &dword_60CB62B4 || sub_60027FB0(a2);
}
