/* sub_606CC6D8
 * address: 0x606CC6D8   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606CC6D8(int *a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60CBB290 & ~(1617741552 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB290) )
  {
    dword_60CBB28C = (int)&off_60C15488;
    _cxa_guard_release(&dword_60CBB290);
  }
  if ( a1 == &dword_60CBB28C )
    return 1;
  if ( ((unsigned int)&dword_60CB6DEC & ~(1617741644 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6DEC) )
  {
    dword_60CB6DE8 = (int)&off_60C12DF0;
    _cxa_guard_release(&dword_60CB6DEC);
  }
  if ( a1 == &dword_60CB6DE8 )
    return 1;
  if ( ((unsigned int)&dword_60CB54EC & ~(1617741736 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB54EC) )
  {
    dword_60CB54E8 = (int)&off_60C12DFC;
    _cxa_guard_release(&dword_60CB54EC);
  }
  if ( a1 == &dword_60CB54E8 )
    return 1;
  if ( ((unsigned int)&dword_60CB54F4 & ~(1617741828 << v1) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB54F4) )
    {
      dword_60CB54F0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB54F4);
    }
  }
  return a1 == &dword_60CB54F0 || sub_60027FB0(a1);
}
