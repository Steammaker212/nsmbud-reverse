/* sub_60623384
 * address: 0x60623384   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60623384()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB3A50 & ~(1617048472 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB3A50) )
  {
    dword_60CB3A4C = (int)&off_60C1138C;
    _cxa_guard_release(dword_60CB3A50);
  }
  return &dword_60CB3A4C;
}
