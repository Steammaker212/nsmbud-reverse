/* sub_6090D784
 * address: 0x6090D784   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6090D784()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8D9F4 & ~(1620105112 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
  {
    dword_60C8D9F0 = (int)&off_60BD9634;
    _cxa_guard_release(&dword_60C8D9F4);
  }
  return &dword_60C8D9F0;
}
