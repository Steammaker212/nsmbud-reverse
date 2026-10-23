/* sub_60997978
 * address: 0x60997978   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60997978()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD0D70 & ~(1620670860 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0D70) )
  {
    dword_60CD0D6C = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CD0D70);
  }
  return &dword_60CD0D6C;
}
