/* SumoBroLightning_vf0
 * address: 0x60335848   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SumoBroLightning_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9415C & ~(1613977696 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9415C) )
  {
    dword_60C94158 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C9415C);
  }
  return a2 == &dword_60C94158 || sub_60026DC8(a2);
}
