/* sub_608CBB80
 * address: 0x608CBB80   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608CBB80()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC8D20 & ~(1619835796 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC8D20) )
  {
    dword_60CC8D1C = (int)sub_608A8728();
    _cxa_guard_release(&dword_60CC8D20);
  }
  return &dword_60CC8D1C;
}
