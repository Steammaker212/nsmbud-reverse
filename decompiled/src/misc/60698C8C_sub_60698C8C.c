/* sub_60698C8C
 * address: 0x60698C8C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60698C8C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9454 & ~(1617530016 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9454) )
  {
    dword_60CB9450 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB9454);
  }
  return &dword_60CB9450;
}
