/* sub_6090AA80
 * address: 0x6090AA80   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6090AA80()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9CD0C & ~(1620093588 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CD0C) )
  {
    dword_60C9CD08 = (int)&off_60BFAD80;
    _cxa_guard_release(&dword_60C9CD0C);
  }
  return &dword_60C9CD08;
}
