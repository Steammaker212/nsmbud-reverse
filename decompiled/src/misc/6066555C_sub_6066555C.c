/* sub_6066555C
 * address: 0x6066555C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6066555C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6B7C & ~(1617319280 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6B7C) )
  {
    dword_60CB6B78 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB6B7C);
  }
  return &dword_60CB6B78;
}
