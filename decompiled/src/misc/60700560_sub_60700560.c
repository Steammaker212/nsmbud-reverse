/* sub_60700560
 * address: 0x60700560   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60700560()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8473C & ~(1617954164 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8473C) )
  {
    dword_60C84738 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C8473C);
  }
  return &dword_60C84738;
}
