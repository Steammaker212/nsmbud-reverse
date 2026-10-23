/* sub_6022A770
 * address: 0x6022A770   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6022A770()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8968C & ~(1612883844 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8968C) )
  {
    dword_60C89688 = (int)&off_60BD5510;
    _cxa_guard_release(&dword_60C8968C);
  }
  return &dword_60C89688;
}
