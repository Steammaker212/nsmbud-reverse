/* sub_6069F4F4
 * address: 0x6069F4F4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6069F4F4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9810 & ~(1617556744 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9810) )
  {
    dword_60CB980C = (int)&off_60C0BD4C;
    _cxa_guard_release(&dword_60CB9810);
  }
  return &dword_60CB980C;
}
