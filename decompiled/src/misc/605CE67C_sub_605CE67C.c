/* sub_605CE67C
 * address: 0x605CE67C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605CE67C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB10A0 & ~(1616701072 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB10A0) )
  {
    dword_60CB109C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB10A0);
  }
  return &dword_60CB109C;
}
