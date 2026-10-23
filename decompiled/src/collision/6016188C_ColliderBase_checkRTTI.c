/* ColliderBase_checkRTTI
 * address: 0x6016188C   size: 108   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ColliderBase_checkRTTI(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C803D0 & ~(1612060836 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
  {
    dword_60C803CC = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C803D0);
  }
  return a2 == &dword_60C803CC;
}
