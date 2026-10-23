/* FireballBase_getRTTI
 * address: 0x60136EF0   size: 92   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *FireballBase_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C823C4 & ~(1611886340 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
  {
    FireballBase_RTTI = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823C4);
  }
  return &FireballBase_RTTI;
}
