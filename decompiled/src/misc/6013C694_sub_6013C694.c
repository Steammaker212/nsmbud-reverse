/* sub_6013C694
 * address: 0x6013C694   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6013C694()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87BC8 & ~(1611908776 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87BC8) )
  {
    dword_60C87BC4 = (int)&off_60BD2E54;
    _cxa_guard_release(&dword_60C87BC8);
  }
  return &dword_60C87BC4;
}
