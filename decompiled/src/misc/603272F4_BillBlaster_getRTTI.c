/* BillBlaster_getRTTI
 * address: 0x603272F4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *BillBlaster_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C93AF0 & ~(1613918984 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C93AF0) )
  {
    dword_60C93AEC = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C93AF0);
  }
  return &dword_60C93AEC;
}
