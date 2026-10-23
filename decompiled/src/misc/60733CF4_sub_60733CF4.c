/* sub_60733CF4
 * address: 0x60733CF4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60733CF4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBDD5C & ~(1618165000 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD5C) )
  {
    dword_60CBDD58 = (int)&off_60C22808;
    _cxa_guard_release(&dword_60CBDD5C);
  }
  return &dword_60CBDD58;
}
