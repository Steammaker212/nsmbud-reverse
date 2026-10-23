/* sub_606A91EC
 * address: 0x606A91EC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A91EC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB73F0 & ~(1617596928 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB73F0) )
  {
    dword_60CB73EC = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB73F0);
  }
  return &dword_60CB73EC;
}
