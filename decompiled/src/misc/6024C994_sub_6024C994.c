/* sub_6024C994
 * address: 0x6024C994   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6024C994()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8DD44 & ~(1613023656 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DD44) )
  {
    dword_60C8DD40 = (int)&off_60BDA210;
    _cxa_guard_release(&dword_60C8DD44);
  }
  return &dword_60C8DD40;
}
