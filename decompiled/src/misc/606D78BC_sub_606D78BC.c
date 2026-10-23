/* sub_606D78BC
 * address: 0x606D78BC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606D78BC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB780 & ~(1617787088 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB780) )
  {
    dword_60CBB77C = (int)&off_60BDE360;
    _cxa_guard_release(&dword_60CBB780);
  }
  return &dword_60CBB77C;
}
