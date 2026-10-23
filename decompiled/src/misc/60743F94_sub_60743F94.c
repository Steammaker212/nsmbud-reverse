/* sub_60743F94
 * address: 0x60743F94   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60743F94()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBDD30 & ~(1618231208 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD30) )
  {
    dword_60CBDD2C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBDD30);
  }
  return &dword_60CBDD2C;
}
