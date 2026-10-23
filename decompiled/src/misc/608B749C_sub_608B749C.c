/* sub_608B749C
 * address: 0x608B749C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608B749C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC829C & ~(1619752112 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC829C) )
  {
    dword_60CC8298 = (int)sub_608A8728();
    _cxa_guard_release(&dword_60CC829C);
  }
  return &dword_60CC8298;
}
