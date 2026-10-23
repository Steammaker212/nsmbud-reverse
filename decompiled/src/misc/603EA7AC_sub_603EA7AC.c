/* sub_603EA7AC
 * address: 0x603EA7AC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603EA7AC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8D914 & ~(1614718912 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D914) )
  {
    dword_60C8D910 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C8D914);
  }
  return &dword_60C8D910;
}
