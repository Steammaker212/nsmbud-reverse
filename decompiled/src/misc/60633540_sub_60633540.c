/* sub_60633540
 * address: 0x60633540   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60633540()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB42CC & ~(1617114452 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB42CC) )
  {
    dword_60CB42C8 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB42CC);
  }
  return &dword_60CB42C8;
}
