/* sub_605C8DE0
 * address: 0x605C8DE0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605C8DE0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB0C7C & ~(1616678388 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0C7C) )
  {
    dword_60CB0C78 = (int)&off_60BC317C;
    _cxa_guard_release(&dword_60CB0C7C);
  }
  return &dword_60CB0C78;
}
