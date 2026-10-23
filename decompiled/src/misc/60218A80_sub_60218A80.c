/* sub_60218A80
 * address: 0x60218A80   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60218A80()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8D3CC & ~(1612810900 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D3CC) )
  {
    dword_60C8D3C8 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8D3CC);
  }
  return &dword_60C8D3C8;
}
