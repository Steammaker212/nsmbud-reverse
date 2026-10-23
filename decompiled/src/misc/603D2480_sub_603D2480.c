/* sub_603D2480
 * address: 0x603D2480   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603D2480()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C98DFC & ~(1614619796 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C98DFC) )
  {
    dword_60C98DF8 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C98DFC);
  }
  return &dword_60C98DF8;
}
