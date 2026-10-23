/* sub_60573DB0
 * address: 0x60573DB0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60573DB0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAE68C & ~(1616330180 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE68C) )
  {
    dword_60CAE688 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAE68C);
  }
  return &dword_60CAE688;
}
