/* sub_600AB968
 * address: 0x600AB968   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600AB968()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82E9C & ~(1611315580 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82E9C) )
  {
    dword_60C82E98 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C82E9C);
  }
  return &dword_60C82E98;
}
