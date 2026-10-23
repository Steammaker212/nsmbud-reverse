/* sub_60131914
 * address: 0x60131914   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60131914(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C82860 & ~(1611864364 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C82860) )
  {
    dword_60C8285C = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C82860);
  }
  return a2 == &dword_60C8285C || sub_60026DC8(a2);
}
