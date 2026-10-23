/* sub_606E4830
 * address: 0x606E4830   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606E4830()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB120C & ~(1617840196 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB120C) )
  {
    dword_60CB1208 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB120C);
  }
  return &dword_60CB1208;
}
