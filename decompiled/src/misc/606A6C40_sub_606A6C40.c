/* sub_606A6C40
 * address: 0x606A6C40   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A6C40()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9B70 & ~(1617587284 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9B70) )
  {
    dword_60CB9B6C = (int)&off_60C19A00;
    _cxa_guard_release(&dword_60CB9B70);
  }
  return &dword_60CB9B6C;
}
