/* sub_608BC800
 * address: 0x608BC800   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608BC800()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC8D18 & ~(1619773460 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC8D18) )
  {
    dword_60CC8D14 = (int)sub_608A8728();
    _cxa_guard_release(&dword_60CC8D18);
  }
  return &dword_60CC8D14;
}
