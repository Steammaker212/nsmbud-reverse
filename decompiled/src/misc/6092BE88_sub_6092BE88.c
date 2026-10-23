/* sub_6092BE88
 * address: 0x6092BE88   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6092BE88()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9CA2C & ~(1620229788 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CA2C) )
  {
    dword_60C9CA28 = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60C9CA2C);
  }
  return &dword_60C9CA28;
}
