/* sub_605B03B8
 * address: 0x605B03B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605B03B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB0334 & ~(1616577484 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0334) )
  {
    dword_60CB0330 = (int)&off_60C08D58;
    _cxa_guard_release(&dword_60CB0334);
  }
  return &dword_60CB0330;
}
