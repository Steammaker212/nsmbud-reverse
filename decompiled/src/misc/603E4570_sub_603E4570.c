/* sub_603E4570
 * address: 0x603E4570   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603E4570()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C995C0 & ~(1614693764 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C995C0) )
  {
    dword_60C995BC = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995C0);
  }
  return &dword_60C995BC;
}
