/* sub_603BE468
 * address: 0x603BE468   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603BE468()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C92F1C & ~(1614537852 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F1C) )
  {
    dword_60C92F18 = (int)&off_60BC9034;
    _cxa_guard_release(&dword_60C92F1C);
  }
  return &dword_60C92F18;
}
