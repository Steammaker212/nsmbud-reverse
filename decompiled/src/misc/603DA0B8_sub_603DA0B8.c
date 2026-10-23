/* sub_603DA0B8
 * address: 0x603DA0B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603DA0B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9911C & ~(1614651596 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
  {
    dword_60C99118 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9911C);
  }
  return &dword_60C99118;
}
