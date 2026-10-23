/* sub_606EB890
 * address: 0x606EB890   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606EB890()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC038 & ~(1617868964 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC038) )
  {
    dword_60CBC034 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBC038);
  }
  return &dword_60CBC034;
}
