/* sub_606525B8
 * address: 0x606525B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606525B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB62B0 & ~(1617241548 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB62B0) )
  {
    dword_60CB62AC = (int)&off_60C14188;
    _cxa_guard_release(&dword_60CB62B0);
  }
  return &dword_60CB62AC;
}
