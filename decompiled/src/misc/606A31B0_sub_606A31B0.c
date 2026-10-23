/* sub_606A31B0
 * address: 0x606A31B0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A31B0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9A3C & ~(1617572292 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9A3C) )
  {
    dword_60CB9A38 = (int)&off_60C1906C;
    _cxa_guard_release(&dword_60CB9A3C);
  }
  return &dword_60CB9A38;
}
