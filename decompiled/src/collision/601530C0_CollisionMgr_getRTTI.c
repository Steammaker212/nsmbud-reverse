/* CollisionMgr_getRTTI
 * address: 0x601530C0   size: 92   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *CollisionMgr_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C881FC & ~(1612001492 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C881FC) )
  {
    dword_60C881F8 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C881FC);
  }
  return &dword_60C881F8;
}
