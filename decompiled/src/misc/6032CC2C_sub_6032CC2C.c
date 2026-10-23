/* sub_6032CC2C
 * address: 0x6032CC2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6032CC2C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C866E0 & ~(1613941824 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C866E0) )
  {
    dword_60C866DC = (int)&off_60BD05B8;
    _cxa_guard_release(&dword_60C866E0);
  }
  return &dword_60C866DC;
}
