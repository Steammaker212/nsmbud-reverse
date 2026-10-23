/* sub_605ADC88
 * address: 0x605ADC88   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605ADC88()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB02AC & ~(1616567452 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB02AC) )
  {
    dword_60CB02A8 = (int)&off_60C08AD0;
    _cxa_guard_release(&dword_60CB02AC);
  }
  return &dword_60CB02A8;
}
