/* sub_60192768
 * address: 0x60192768   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60192768()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C899BC & ~(1612261244 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C899BC) )
  {
    dword_60C899B8 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C899BC);
  }
  return &dword_60C899B8;
}
