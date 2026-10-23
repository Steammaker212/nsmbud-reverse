/* sub_602B2548
 * address: 0x602B2548   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602B2548()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C90C7C & ~(1613440348 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C90C7C) )
  {
    dword_60C90C78 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90C7C);
  }
  return &dword_60C90C78;
}
