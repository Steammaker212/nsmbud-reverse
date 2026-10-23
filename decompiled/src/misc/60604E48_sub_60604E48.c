/* sub_60604E48
 * address: 0x60604E48   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60604E48()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2994 & ~(1616924252 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2994) )
  {
    dword_60CB2990 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB2994);
  }
  return &dword_60CB2990;
}
