/* sub_6072F268
 * address: 0x6072F268   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6072F268()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBD950 & ~(1618145916 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD950) )
  {
    dword_60CBD94C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBD950);
  }
  return &dword_60CBD94C;
}
