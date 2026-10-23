/* sub_6063ACDC
 * address: 0x6063ACDC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6063ACDC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB54E4 & ~(1617145072 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB54E4) )
  {
    dword_60CB54E0 = (int)&off_60C12DF0;
    _cxa_guard_release(&dword_60CB54E4);
  }
  return &dword_60CB54E0;
}
