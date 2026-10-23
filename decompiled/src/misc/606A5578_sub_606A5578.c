/* sub_606A5578
 * address: 0x606A5578   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606A5578(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB9B18 & ~(1617581456 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9B18) )
  {
    dword_60CB9B14 = (int)&off_60C19910;
    _cxa_guard_release(&dword_60CB9B18);
  }
  if ( a2 == &dword_60CB9B14 )
    return 1;
  if ( ((unsigned int)&dword_60CB9B20 & ~(1617581548 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB9B20) )
    {
      dword_60CB9B1C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB9B20);
    }
  }
  return a2 == &dword_60CB9B1C || sub_60027FB0(a2);
}
