/* sub_605B1B78
 * address: 0x605B1B78   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605B1B78()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB038C & ~(1616583564 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB038C) )
  {
    dword_60CB0388 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60CB038C);
  }
  return &dword_60CB0388;
}
