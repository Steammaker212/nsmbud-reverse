/* SolidOnTopCollider_getRTTI
 * address: 0x6015FF58   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *SolidOnTopCollider_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C803E8 & ~(1612054380 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C803E8) )
  {
    dword_60C803E4 = (int)&off_60BC3188;
    _cxa_guard_release(&dword_60C803E8);
  }
  return &dword_60C803E4;
}
