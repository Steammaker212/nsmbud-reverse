/* EffectWrapper_getRTTI
 * address: 0x6002191C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *EffectWrapper_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7F51C & ~(1610750256 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F51C) )
  {
    dword_60C7F518 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C7F51C);
  }
  return &dword_60C7F518;
}
