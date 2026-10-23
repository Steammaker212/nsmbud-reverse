/* MistEffect_vf1
 * address: 0x605A9850   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *MistEffect_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB0118 & ~(1616549988 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0118) )
  {
    dword_60CB0114 = (int)&off_60BC8348;
    _cxa_guard_release(&dword_60CB0118);
  }
  return &dword_60CB0114;
}
