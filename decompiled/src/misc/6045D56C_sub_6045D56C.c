/* sub_6045D56C
 * address: 0x6045D56C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6045D56C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9D140 & ~(1615189380 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D140) )
  {
    dword_60C9D13C = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C9D140);
  }
  if ( a2 == &dword_60C9D13C )
    return 1;
  if ( ((unsigned int)&dword_60C7B36C & ~(1615189472 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B36C) )
    {
      Actor_RTTI = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C7B36C);
    }
  }
  return a2 == &Actor_RTTI;
}
