/* sub_606A01BC
 * address: 0x606A01BC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A01BC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9878 & ~(1617560016 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9878) )
  {
    dword_60CB9874 = (int)&off_60C0BD4C;
    _cxa_guard_release(&dword_60CB9878);
  }
  return &dword_60CB9874;
}
