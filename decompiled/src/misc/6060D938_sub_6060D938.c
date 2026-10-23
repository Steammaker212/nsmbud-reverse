/* sub_6060D938
 * address: 0x6060D938   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6060D938()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2EE0 & ~(1616959820 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2EE0) )
  {
    dword_60CB2EDC = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB2EE0);
  }
  return &dword_60CB2EDC;
}
