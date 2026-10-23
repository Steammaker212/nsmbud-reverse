/* sub_606014FC
 * address: 0x606014FC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606014FC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB283C & ~(1616909584 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB283C) )
  {
    dword_60CB2838 = (int)&off_60C0EAA8;
    _cxa_guard_release(&dword_60CB283C);
  }
  return &dword_60CB2838;
}
