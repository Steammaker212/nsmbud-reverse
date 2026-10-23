/* sub_608065A0
 * address: 0x608065A0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *sub_608065A0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6AE0 & ~(1619027380 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE0) )
  {
    ((void (__fastcall *)(void *))loc_608B4F8C)(&unk_60CC64C0);
    sub_60000288();
    _cxa_guard_release(&dword_60CC6AE0);
  }
  return &unk_60CC64C0;
}
