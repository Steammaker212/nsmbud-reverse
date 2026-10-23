/* sub_6061B2A8
 * address: 0x6061B2A8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6061B2A8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB34B4 & ~(1617015484 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB34B4) )
  {
    dword_60CB34B0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB34B4);
  }
  return &dword_60CB34B0;
}
