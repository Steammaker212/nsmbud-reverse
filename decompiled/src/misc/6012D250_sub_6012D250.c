/* sub_6012D250
 * address: 0x6012D250   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6012D250()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C87140 & ~(1611846244 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C87140) )
  {
    dword_60C8713C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87140);
  }
  return &dword_60C8713C;
}
