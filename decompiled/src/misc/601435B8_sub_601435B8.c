/* sub_601435B8
 * address: 0x601435B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601435B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87EBC & ~(1611937228 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87EBC) )
  {
    dword_60C87EB8 = (int)&off_60BC7C30;
    _cxa_guard_release(&dword_60C87EBC);
  }
  return &dword_60C87EB8;
}
