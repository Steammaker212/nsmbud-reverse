/* sub_600632DC
 * address: 0x600632DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600632DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C81078 & ~(1611018992 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C81078) )
  {
    dword_60C81074 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C81078);
  }
  return &dword_60C81074;
}
