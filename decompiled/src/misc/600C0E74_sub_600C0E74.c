/* sub_600C0E74
 * address: 0x600C0E74   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600C0E74()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8396C & ~(1611402888 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8396C) )
  {
    dword_60C83968 = (int)&off_60BC9D8C;
    _cxa_guard_release(&dword_60C8396C);
  }
  return &dword_60C83968;
}
