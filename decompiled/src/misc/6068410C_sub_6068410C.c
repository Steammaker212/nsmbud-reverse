/* sub_6068410C
 * address: 0x6068410C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6068410C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB82D0 & ~(1617445152 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB82D0) )
  {
    dword_60CB82CC = (int)&off_60BC2CE0;
    _cxa_guard_release(&dword_60CB82D0);
  }
  return &dword_60CB82CC;
}
