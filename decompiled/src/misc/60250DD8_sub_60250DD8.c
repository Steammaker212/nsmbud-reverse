/* sub_60250DD8
 * address: 0x60250DD8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60250DD8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8DEC4 & ~(1613041132 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DEC4) )
  {
    dword_60C8DEC0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8DEC4);
  }
  return &dword_60C8DEC0;
}
