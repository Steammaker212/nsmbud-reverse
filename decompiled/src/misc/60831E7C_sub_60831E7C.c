/* sub_60831E7C
 * address: 0x60831E7C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60831E7C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC7254 & ~(1619205776 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7254) )
  {
    dword_60CC7250 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60CC7254);
  }
  return &dword_60CC7250;
}
