/* sub_605B741C
 * address: 0x605B741C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605B741C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB05C8 & ~(1616606256 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB05C8) )
  {
    dword_60CB05C4 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB05C8);
  }
  return &dword_60CB05C4;
}
