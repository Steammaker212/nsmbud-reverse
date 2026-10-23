/* sub_6066DAB4
 * address: 0x6066DAB4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6066DAB4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6F7C & ~(1617353416 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6F7C) )
  {
    dword_60CB6F78 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB6F7C);
  }
  return &dword_60CB6F78;
}
