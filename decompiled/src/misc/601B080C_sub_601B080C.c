/* sub_601B080C
 * address: 0x601B080C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601B080C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8A890 & ~(1612384292 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8A890) )
  {
    dword_60C8A88C = (int)&off_60BD4EC8;
    _cxa_guard_release(dword_60C8A890);
  }
  return a2 == &dword_60C8A88C || sub_601767E8(a2);
}
