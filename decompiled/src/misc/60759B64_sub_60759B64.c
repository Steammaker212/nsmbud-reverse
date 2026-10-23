/* sub_60759B64
 * address: 0x60759B64   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60759B64()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBEF2C & ~(1618320248 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBEF2C) )
  {
    dword_60CBEF28 = (int)&off_60C23E4C;
    _cxa_guard_release(&dword_60CBEF2C);
  }
  return &dword_60CBEF28;
}
