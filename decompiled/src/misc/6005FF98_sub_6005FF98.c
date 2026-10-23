/* sub_6005FF98
 * address: 0x6005FF98   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6005FF98(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C80EFC & ~(1611005872 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80EFC) )
  {
    dword_60C80EF8 = (int)&off_60BC3768;
    _cxa_guard_release(&dword_60C80EFC);
  }
  return a2 == &dword_60C80EF8 || sub_6004F7C8(a2);
}
