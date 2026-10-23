/* sub_601FD58C
 * address: 0x601FD58C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601FD58C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8AF40 & ~(1612699040 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF40) )
  {
    dword_60C8AF3C = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8AF40);
  }
  return &dword_60C8AF3C;
}
