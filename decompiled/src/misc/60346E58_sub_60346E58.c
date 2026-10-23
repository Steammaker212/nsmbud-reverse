/* sub_60346E58
 * address: 0x60346E58   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60346E58()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9487C & ~(1614048876 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9487C) )
  {
    dword_60C94878 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9487C);
  }
  return &dword_60C94878;
}
