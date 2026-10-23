/* sub_6082F794
 * address: 0x6082F794   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6082F794()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC7060 & ~(1619195816 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7060) )
  {
    dword_60CC705C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CC7060);
  }
  return &dword_60CC705C;
}
