/* lift_huriko_yougan_kusari_ref
 * address: 0x6063D0C8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *lift_huriko_yougan_kusari_ref()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB56EC & ~(1617154268 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB56EC) )
  {
    dword_60CB56F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CB56F4 = (int)"lift_huriko_yougan_kusari";
    _cxa_guard_release(&dword_60CB56EC);
  }
  return &dword_60CB56F0;
}
