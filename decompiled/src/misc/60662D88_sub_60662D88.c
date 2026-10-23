/* sub_60662D88
 * address: 0x60662D88   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60662D88()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6AD8 & ~(1617309084 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6AD8) )
  {
    dword_60CB6AD4 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB6AD8);
  }
  return &dword_60CB6AD4;
}
