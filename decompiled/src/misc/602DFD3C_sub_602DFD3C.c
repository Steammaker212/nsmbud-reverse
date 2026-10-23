/* sub_602DFD3C
 * address: 0x602DFD3C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602DFD3C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C91D58 & ~(1613626708 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C91D58) )
  {
    dword_60C91D54 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C91D58);
  }
  return a2 == &dword_60C91D54 || sub_60027FB0(a2);
}
