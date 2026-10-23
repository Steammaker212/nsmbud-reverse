/* sub_606A567C
 * address: 0x606A567C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A567C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9B18 & ~(1617581712 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9B18) )
  {
    dword_60CB9B14 = (int)&off_60C19910;
    _cxa_guard_release(&dword_60CB9B18);
  }
  return &dword_60CB9B14;
}
