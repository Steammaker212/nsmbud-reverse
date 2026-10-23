/* sub_60133C40
 * address: 0x60133C40   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60133C40()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87668 & ~(1611873364 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87668) )
  {
    dword_60C87664 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C87668);
  }
  return &dword_60C87664;
}
