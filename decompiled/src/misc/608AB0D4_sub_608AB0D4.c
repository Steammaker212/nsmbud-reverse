/* sub_608AB0D4
 * address: 0x608AB0D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *sub_608AB0D4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC88C8 & ~(1619701992 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC88C8) )
  {
    dword_60CC85BC = 0;
    dword_60CC88C0 = 0;
    dword_60CC88C4 = (int)&unk_60CC82BC;
    _cxa_guard_release(&dword_60CC88C8);
  }
  return &unk_60CC82BC;
}
