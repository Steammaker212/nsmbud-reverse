/* sub_6090DA7C
 * address: 0x6090DA7C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6090DA7C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCF470 & ~(1620105872 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCF470) )
  {
    dword_60CCF46C = (int)&off_60BD9634;
    _cxa_guard_release(&dword_60CCF470);
  }
  return &dword_60CCF46C;
}
