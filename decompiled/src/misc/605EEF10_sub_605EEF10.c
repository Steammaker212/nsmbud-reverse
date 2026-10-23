/* sub_605EEF10
 * address: 0x605EEF10   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605EEF10()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB1F04 & ~(1616834340 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1F04) )
  {
    dword_60CB1F00 = (int)&off_60C0BD4C;
    _cxa_guard_release(&dword_60CB1F04);
  }
  return &dword_60CB1F00;
}
