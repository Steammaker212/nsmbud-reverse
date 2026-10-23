/* ColliderBase_getRTTI
 * address: 0x60161910   size: 92   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *ColliderBase_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C803D0 & ~(1612060964 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
  {
    dword_60C803CC = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C803D0);
  }
  return &dword_60C803CC;
}
