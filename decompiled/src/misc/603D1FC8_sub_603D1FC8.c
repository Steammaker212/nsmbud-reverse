/* sub_603D1FC8
 * address: 0x603D1FC8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603D1FC8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C98DB0 & ~(1614618588 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C98DB0) )
  {
    dword_60C98DAC = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C98DB0);
  }
  return &dword_60C98DAC;
}
