/* sub_6059195C
 * address: 0x6059195C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6059195C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAF750 & ~(1616451952 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF750) )
  {
    dword_60CAF74C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAF750);
  }
  return &dword_60CAF74C;
}
