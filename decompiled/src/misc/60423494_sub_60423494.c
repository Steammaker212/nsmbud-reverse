/* sub_60423494
 * address: 0x60423494   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60423494()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9BB50 & ~(1614951592 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB50) )
  {
    dword_60C9BB4C = (int)&off_60BD83C8;
    _cxa_guard_release(&dword_60C9BB50);
  }
  return &dword_60C9BB4C;
}
