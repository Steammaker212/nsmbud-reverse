/* sub_6063D8B4
 * address: 0x6063D8B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6063D8B4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB5714 & ~(1617156296 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5714) )
  {
    dword_60CB5710 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB5714);
  }
  return &dword_60CB5710;
}
