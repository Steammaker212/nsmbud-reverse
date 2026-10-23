/* sub_6072C340
 * address: 0x6072C340   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6072C340()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBD938 & ~(1618133844 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD938) )
  {
    dword_60CBD934 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBD938);
  }
  return &dword_60CBD934;
}
