/* sub_603DCFE0
 * address: 0x603DCFE0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603DCFE0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9931C & ~(1614663668 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9931C) )
  {
    dword_60C99318 = (int)&off_60BF8684;
    _cxa_guard_release(&dword_60C9931C);
  }
  return &dword_60C99318;
}
