/* sub_60651DC0
 * address: 0x60651DC0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60651DC0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6290 & ~(1617239508 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6290) )
  {
    dword_60CB628C = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB6290);
  }
  return &dword_60CB628C;
}
