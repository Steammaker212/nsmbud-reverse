/* sub_603BBA00
 * address: 0x603BBA00   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603BBA00(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C92F14 & ~(1614527000 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F14) )
  {
    dword_60C92F10 = (int)&off_60BE91C8;
    _cxa_guard_release(&dword_60C92F14);
  }
  return a2 == &dword_60C92F10 || sub_6037A800(a2);
}
