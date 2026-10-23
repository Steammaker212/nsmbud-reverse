/* sub_60515C34
 * address: 0x60515C34   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60515C34(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CA8674 & ~(1615944780 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8674) )
  {
    dword_60CA8670 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CA8674);
  }
  return a2 == &dword_60CA8670;
}
