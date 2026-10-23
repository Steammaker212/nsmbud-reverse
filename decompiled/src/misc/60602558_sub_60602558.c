/* sub_60602558
 * address: 0x60602558   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60602558()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB28A8 & ~(1616913772 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB28A8) )
  {
    dword_60CB28A4 = (int)&off_60C0EAA8;
    _cxa_guard_release(&dword_60CB28A8);
  }
  return &dword_60CB28A4;
}
