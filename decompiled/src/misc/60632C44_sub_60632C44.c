/* sub_60632C44
 * address: 0x60632C44   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60632C44()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB423C & ~(1617112152 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB423C) )
  {
    dword_60CB4238 = (int)&off_60C12704;
    _cxa_guard_release(&dword_60CB423C);
  }
  return &dword_60CB4238;
}
