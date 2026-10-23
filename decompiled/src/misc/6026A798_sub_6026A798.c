/* sub_6026A798
 * address: 0x6026A798   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6026A798()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8E764 & ~(1613146028 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E764) )
  {
    dword_60C8E760 = (int)&off_60BDC230;
    _cxa_guard_release(&dword_60C8E764);
  }
  return &dword_60C8E760;
}
