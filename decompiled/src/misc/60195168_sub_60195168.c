/* sub_60195168
 * address: 0x60195168   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60195168()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C89B34 & ~(1612271996 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C89B34) )
  {
    dword_60C89B30 = (int)&off_60BD5A64;
    _cxa_guard_release(&dword_60C89B34);
  }
  return &dword_60C89B30;
}
