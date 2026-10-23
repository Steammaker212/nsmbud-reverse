/* sub_60603624
 * address: 0x60603624   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60603624()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2844 & ~(1616918072 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2844) )
  {
    dword_60CB2840 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB2844);
  }
  return &dword_60CB2840;
}
