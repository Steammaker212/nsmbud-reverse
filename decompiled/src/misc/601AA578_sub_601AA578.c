/* sub_601AA578
 * address: 0x601AA578   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601AA578(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8A4F0 & ~(1612359056 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8A4F0) )
  {
    dword_60C8A4EC = (int)&off_60BD4EC8;
    _cxa_guard_release(dword_60C8A4F0);
  }
  return a2 == &dword_60C8A4EC || sub_601767E8(a2);
}
