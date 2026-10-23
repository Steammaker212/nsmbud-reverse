/* sub_602FD96C
 * address: 0x602FD96C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602FD96C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C92AD0 & ~(1613748608 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C92AD0) )
  {
    dword_60C92ACC = (int)&off_60BE7F9C;
    _cxa_guard_release(&dword_60C92AD0);
  }
  return &dword_60C92ACC;
}
