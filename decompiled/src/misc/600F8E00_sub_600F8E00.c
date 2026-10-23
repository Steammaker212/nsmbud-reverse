/* sub_600F8E00
 * address: 0x600F8E00   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600F8E00()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C85C3C & ~(1611632148 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C85C3C) )
  {
    dword_60C85C38 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C85C3C);
  }
  return &dword_60C85C38;
}
