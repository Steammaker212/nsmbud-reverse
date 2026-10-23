/* sub_605C0F38
 * address: 0x605C0F38   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605C0F38()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB0A00 & ~(1616645964 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0A00) )
  {
    dword_60CB09FC = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60CB0A00);
  }
  return &dword_60CB09FC;
}
