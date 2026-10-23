/* sub_605CD1F8
 * address: 0x605CD1F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605CD1F8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB0F80 & ~(1616695820 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0F80) )
  {
    dword_60CB0F7C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB0F80);
  }
  return &dword_60CB0F7C;
}
