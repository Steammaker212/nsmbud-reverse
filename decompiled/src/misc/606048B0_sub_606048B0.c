/* sub_606048B0
 * address: 0x606048B0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606048B0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2954 & ~(1616922820 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2954) )
  {
    dword_60CB2950 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB2954);
  }
  return &dword_60CB2950;
}
