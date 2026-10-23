/* sub_605B88DC
 * address: 0x605B88DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605B88DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB060C & ~(1616611568 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB060C) )
  {
    dword_60CB0608 = (int)&off_60C0970C;
    _cxa_guard_release(&dword_60CB060C);
  }
  return &dword_60CB0608;
}
