/* sub_604BC6C8
 * address: 0x604BC6C8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604BC6C8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CA2770 & ~(1615578844 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2770) )
  {
    dword_60CA276C = (int)&off_60BFD54C;
    _cxa_guard_release(&dword_60CA2770);
  }
  return &dword_60CA276C;
}
