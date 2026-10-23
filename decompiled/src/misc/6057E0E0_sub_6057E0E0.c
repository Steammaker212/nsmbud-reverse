/* sub_6057E0E0
 * address: 0x6057E0E0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6057E0E0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAEF04 & ~(1616371956 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEF04) )
  {
    dword_60CAEF00 = (int)&off_60C04FBC;
    _cxa_guard_release(&dword_60CAEF04);
  }
  return &dword_60CAEF00;
}
