/* sub_6065359C
 * address: 0x6065359C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6065359C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB62B8 & ~(1617245616 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB62B8) )
  {
    dword_60CB62B4 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB62B8);
  }
  return &dword_60CB62B4;
}
