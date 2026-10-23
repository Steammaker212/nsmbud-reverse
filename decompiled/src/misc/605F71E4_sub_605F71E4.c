/* sub_605F71E4
 * address: 0x605F71E4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605F71E4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2398 & ~(1616867832 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2398) )
  {
    dword_60CB2394 = (int)&off_60C075D4;
    _cxa_guard_release(&dword_60CB2398);
  }
  return &dword_60CB2394;
}
