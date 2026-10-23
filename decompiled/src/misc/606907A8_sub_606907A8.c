/* sub_606907A8
 * address: 0x606907A8   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606907A8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB8FEC & ~(1617496252 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB8FEC) )
  {
    dword_60CB8FE8 = (int)&off_60C17884;
    _cxa_guard_release(&dword_60CB8FEC);
  }
  if ( a2 == &dword_60CB8FE8 )
    return 1;
  if ( ((unsigned int)&dword_60CB8FCC & ~(1617496344 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB8FCC) )
  {
    dword_60CB8FC8 = (int)&off_60C1777C;
    _cxa_guard_release(&dword_60CB8FCC);
  }
  if ( a2 == &dword_60CB8FC8 )
    return 1;
  if ( ((unsigned int)dword_60CB84C8 & ~(1617496436 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB84C8) )
  {
    dword_60CB84C4 = (int)&off_60C12DFC;
    _cxa_guard_release(dword_60CB84C8);
  }
  if ( a2 == &dword_60CB84C4 )
    return 1;
  if ( ((unsigned int)&dword_60CB54F4 & ~(1617496528 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB54F4) )
    {
      dword_60CB54F0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB54F4);
    }
  }
  return a2 == &dword_60CB54F0 || sub_60027FB0(a2);
}
