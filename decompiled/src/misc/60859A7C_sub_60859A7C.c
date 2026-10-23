/* sub_60859A7C
 * address: 0x60859A7C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60859A7C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D9D4 & ~(1619368592 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
  {
    dword_60C9D9D0 = 0;
    _cxa_guard_release(&dword_60C9D9D4);
  }
  return &dword_60C9D9D0;
}
