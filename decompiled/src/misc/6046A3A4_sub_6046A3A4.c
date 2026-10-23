/* sub_6046A3A4
 * address: 0x6046A3A4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6046A3A4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D528 & ~(1615242168 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D528) )
  {
    dword_60C9D524 = (int)&off_60BFB4E4;
    _cxa_guard_release(&dword_60C9D528);
  }
  return &dword_60C9D524;
}
