/* sub_6066C7DC
 * address: 0x6066C7DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6066C7DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6EC4 & ~(1617348592 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6EC4) )
  {
    dword_60CB6EC0 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB6EC4);
  }
  return &dword_60CB6EC0;
}
