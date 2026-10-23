/* sub_606E032C
 * address: 0x606E032C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606E032C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB0990 & ~(1617822528 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB0990) )
  {
    dword_60CB098C = (int)&off_60C09CE0;
    _cxa_guard_release(dword_60CB0990);
  }
  return &dword_60CB098C;
}
