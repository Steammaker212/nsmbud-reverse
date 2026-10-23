/* sub_6046FBD8
 * address: 0x6046FBD8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6046FBD8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D840 & ~(1615264748 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D840) )
  {
    dword_60C9D83C = (int)&off_60BFB4E4;
    _cxa_guard_release(&dword_60C9D840);
  }
  return &dword_60C9D83C;
}
