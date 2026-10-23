/* sub_60692DD8
 * address: 0x60692DD8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60692DD8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB90EC & ~(1617505776 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB90EC) )
  {
    dword_60CB90E8 = (int)&off_60C0AB94;
    _cxa_guard_release(&dword_60CB90EC);
  }
  if ( a2 == &dword_60CB90E8 )
    return 1;
  if ( ((unsigned int)&dword_60CB1080 & ~(1617505868 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB1080) )
    {
      dword_60CB107C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB1080);
    }
  }
  return a2 == &dword_60CB107C || sub_60027FB0(a2);
}
