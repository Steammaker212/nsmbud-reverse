/* sub_603EBBF4
 * address: 0x603EBBF4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603EBBF4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C995F0 & ~(1614724104 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C995F0) )
  {
    dword_60C995EC = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995F0);
  }
  return &dword_60C995EC;
}
