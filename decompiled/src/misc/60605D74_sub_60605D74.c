/* sub_60605D74
 * address: 0x60605D74   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60605D74()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2A74 & ~(1616928136 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2A74) )
  {
    dword_60CB2A70 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB2A74);
  }
  return &dword_60CB2A70;
}
