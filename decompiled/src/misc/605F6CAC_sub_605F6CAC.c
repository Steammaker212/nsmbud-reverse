/* sub_605F6CAC
 * address: 0x605F6CAC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605F6CAC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2374 & ~(1616866496 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2374) )
  {
    dword_60CB2370 = (int)&off_60C075D4;
    _cxa_guard_release(&dword_60CB2374);
  }
  return &dword_60CB2370;
}
