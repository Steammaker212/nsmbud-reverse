/* sub_602FE850
 * address: 0x602FE850   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602FE850()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C92B04 & ~(1613752420 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C92B04) )
  {
    dword_60C92B00 = (int)&off_60BE7F9C;
    _cxa_guard_release(&dword_60C92B04);
  }
  return &dword_60C92B00;
}
