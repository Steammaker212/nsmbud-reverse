/* sub_603AB494
 * address: 0x603AB494   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603AB494()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C97B0C & ~(1614460072 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C97B0C) )
  {
    dword_60C97B08 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C97B0C);
  }
  return &dword_60C97B08;
}
