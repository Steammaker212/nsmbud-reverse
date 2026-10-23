/* sub_60628C94
 * address: 0x60628C94   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60628C94()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3C68 & ~(1617071272 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3C68) )
  {
    dword_60CB3C64 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB3C68);
  }
  return &dword_60CB3C64;
}
