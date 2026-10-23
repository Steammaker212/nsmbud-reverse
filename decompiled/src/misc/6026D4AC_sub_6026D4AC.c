/* sub_6026D4AC
 * address: 0x6026D4AC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6026D4AC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8E7FC & ~(1613157568 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E7FC) )
  {
    dword_60C8E7F8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C8E7FC);
  }
  return &dword_60C8E7F8;
}
