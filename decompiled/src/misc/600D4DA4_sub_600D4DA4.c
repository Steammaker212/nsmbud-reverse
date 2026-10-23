/* sub_600D4DA4
 * address: 0x600D4DA4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600D4DA4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C80070 & ~(1611484604 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80070) )
  {
    dword_60C8006C = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C80070);
  }
  if ( a2 == &dword_60C8006C )
    return 1;
  if ( ((unsigned int)&dword_60C7F710 & ~(1611484696 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7F710) )
    {
      dword_60C7F70C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7F710);
    }
  }
  return a2 == &dword_60C7F70C || sub_60027FB0(a2);
}
