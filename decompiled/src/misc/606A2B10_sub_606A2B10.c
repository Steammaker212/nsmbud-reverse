/* sub_606A2B10
 * address: 0x606A2B10   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A2B10()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB99FC & ~(1617570596 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB99FC) )
  {
    dword_60CB99F8 = (int)&off_60C1906C;
    _cxa_guard_release(&dword_60CB99FC);
  }
  return &dword_60CB99F8;
}
