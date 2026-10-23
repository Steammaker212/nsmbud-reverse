/* sub_600E0A98
 * address: 0x600E0A98   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600E0A98(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C84B44 & ~(1611532976 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B44) )
  {
    dword_60C84B40 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C84B44);
  }
  return a2 == &dword_60C84B40 || sub_600A1528(a2);
}
