/* sub_60138E18
 * address: 0x60138E18   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60138E18(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C87964 & ~(1611894320 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
  {
    dword_60C87960 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C87964);
  }
  return a2 == &dword_60C87960 || sub_60027FB0(a2);
}
