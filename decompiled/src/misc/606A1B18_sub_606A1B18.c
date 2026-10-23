/* sub_606A1B18
 * address: 0x606A1B18   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A1B18()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9948 & ~(1617566508 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9948) )
  {
    dword_60CB9944 = (int)&off_60C0BD4C;
    _cxa_guard_release(&dword_60CB9948);
  }
  return &dword_60CB9944;
}
