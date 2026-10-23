/* sub_60145894
 * address: 0x60145894   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60145894(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C88030 & ~(1611946156 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
  {
    dword_60C8802C = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C88030);
  }
  if ( a2 == &dword_60C8802C )
    return 1;
  if ( ((unsigned int)&dword_60C87670 & ~(1611946248 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C87670) )
    {
      dword_60C8766C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C87670);
    }
  }
  return a2 == &dword_60C8766C || sub_60027FB0(a2);
}
