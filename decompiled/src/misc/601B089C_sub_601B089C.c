/* sub_601B089C
 * address: 0x601B089C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601B089C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8A890 & ~(1612384432 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8A890) )
  {
    dword_60C8A88C = (int)&off_60BD4EC8;
    _cxa_guard_release(dword_60C8A890);
  }
  return &dword_60C8A88C;
}
