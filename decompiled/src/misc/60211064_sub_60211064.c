/* sub_60211064
 * address: 0x60211064   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60211064()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8CF5C & ~(1612779640 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8CF5C) )
  {
    dword_60C8CF58 = (int)&off_60BD4EC8;
    _cxa_guard_release(&dword_60C8CF5C);
  }
  return &dword_60C8CF58;
}
