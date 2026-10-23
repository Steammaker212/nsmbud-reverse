/* sub_605FDC34
 * address: 0x605FDC34   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605FDC34()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2690 & ~(1616895048 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2690) )
  {
    dword_60CB268C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB2690);
  }
  return &dword_60CB268C;
}
