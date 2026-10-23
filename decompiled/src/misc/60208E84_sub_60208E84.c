/* sub_60208E84
 * address: 0x60208E84   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60208E84(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8C8B8 & ~(1612746396 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8C8B8) )
  {
    dword_60C8C8B4 = (int)&off_60BD4EC8;
    _cxa_guard_release(dword_60C8C8B8);
  }
  return a2 == &dword_60C8C8B4 || sub_601767E8(a2);
}
