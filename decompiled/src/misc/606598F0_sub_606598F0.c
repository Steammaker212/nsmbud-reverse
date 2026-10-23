/* sub_606598F0
 * address: 0x606598F0   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606598F0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB6640 & ~(1617271048 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6640) )
  {
    dword_60CB663C = (int)&off_60C12DF0;
    _cxa_guard_release(&dword_60CB6640);
  }
  if ( a2 == &dword_60CB663C )
    return 1;
  if ( ((unsigned int)&dword_60CB54EC & ~(1617271140 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB54EC) )
  {
    dword_60CB54E8 = (int)&off_60C12DFC;
    _cxa_guard_release(&dword_60CB54EC);
  }
  if ( a2 == &dword_60CB54E8 )
    return 1;
  if ( ((unsigned int)&dword_60CB54F4 & ~(1617271232 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB54F4) )
    {
      dword_60CB54F0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB54F4);
    }
  }
  return a2 == &dword_60CB54F0 || sub_60027FB0(a2);
}
