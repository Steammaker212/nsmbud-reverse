/* sub_6092AD44
 * address: 0x6092AD44   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6092AD44()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD09E0 & ~(1620225368 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD09E0) )
  {
    dword_60CD09DC = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60CD09E0);
  }
  return &dword_60CD09DC;
}
