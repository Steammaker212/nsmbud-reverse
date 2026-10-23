/* sub_60665D4C
 * address: 0x60665D4C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60665D4C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6BD0 & ~(1617321312 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6BD0) )
  {
    dword_60CB6BCC = (int)&off_60C14ED0;
    _cxa_guard_release(&dword_60CB6BD0);
  }
  return &dword_60CB6BCC;
}
