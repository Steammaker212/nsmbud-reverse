/* sub_605BE214
 * address: 0x605BE214   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605BE214()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB0890 & ~(1616634408 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0890) )
  {
    dword_60CB088C = (int)&off_60C09BC4;
    _cxa_guard_release(&dword_60CB0890);
  }
  return &dword_60CB088C;
}
