/* sub_605F1E40
 * address: 0x605F1E40   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605F1E40()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2124 & ~(1616846420 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2124) )
  {
    dword_60CB2120 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB2124);
  }
  return &dword_60CB2120;
}
