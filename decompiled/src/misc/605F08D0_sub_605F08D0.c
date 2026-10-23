/* sub_605F08D0
 * address: 0x605F08D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605F08D0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB204C & ~(1616840932 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB204C) )
  {
    dword_60CB2048 = (int)&off_60C0BD4C;
    _cxa_guard_release(&dword_60CB204C);
  }
  return &dword_60CB2048;
}
