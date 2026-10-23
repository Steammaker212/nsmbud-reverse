/* sub_6059AD1C
 * address: 0x6059AD1C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6059AD1C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CAFA60 & ~(1616489776 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CAFA60) )
  {
    dword_60CAFA5C = (int)&off_60BDBC48;
    _cxa_guard_release(dword_60CAFA60);
  }
  return &dword_60CAFA5C;
}
