/* sub_601FFB48
 * address: 0x601FFB48   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601FFB48()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8C1FC & ~(1612708700 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C1FC) )
  {
    dword_60C8C1F8 = (int)&off_60BD83BC;
    _cxa_guard_release(&dword_60C8C1FC);
  }
  return &dword_60C8C1F8;
}
