/* sub_6073BB70
 * address: 0x6073BB70   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6073BB70()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBDD28 & ~(1618197380 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
  {
    dword_60CBDD24 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBDD28);
  }
  return &dword_60CBDD24;
}
