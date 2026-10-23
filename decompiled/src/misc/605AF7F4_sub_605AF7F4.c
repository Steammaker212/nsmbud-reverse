/* sub_605AF7F4
 * address: 0x605AF7F4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605AF7F4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB02F4 & ~(1616574472 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB02F4) )
  {
    dword_60CB02F0 = (int)&off_60C08D58;
    _cxa_guard_release(&dword_60CB02F4);
  }
  return &dword_60CB02F0;
}
