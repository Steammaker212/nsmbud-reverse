/* sub_608C3B10
 * address: 0x608C3B10   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *sub_608C3B10()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC8EF0 & ~(1619802916 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC8EF0) )
  {
    sub_608C2530((int)&unk_60CC8D4C);
    sub_60000288();
    _cxa_guard_release(&dword_60CC8EF0);
  }
  return &unk_60CC8D4C;
}
