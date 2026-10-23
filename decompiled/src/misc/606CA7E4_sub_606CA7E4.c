/* sub_606CA7E4
 * address: 0x606CA7E4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606CA7E4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB54F4 & ~(1617733624 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB54F4) )
  {
    dword_60CB54F0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB54F4);
  }
  return &dword_60CB54F0;
}
