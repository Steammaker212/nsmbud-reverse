/* sub_606A0D8C
 * address: 0x606A0D8C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606A0D8C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB98E0 & ~(1617563044 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB98E0) )
  {
    dword_60CB98DC = (int)&off_60C0BD4C;
    _cxa_guard_release(&dword_60CB98E0);
  }
  if ( a2 == &dword_60CB98DC )
    return 1;
  if ( ((unsigned int)&dword_60CB1F0C & ~(1617563136 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB1F0C) )
    {
      dword_60CB1F08 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB1F0C);
    }
  }
  return a2 == &dword_60CB1F08 || sub_60027FB0(a2);
}
