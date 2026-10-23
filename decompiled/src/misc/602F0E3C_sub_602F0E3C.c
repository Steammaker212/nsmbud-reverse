/* sub_602F0E3C
 * address: 0x602F0E3C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602F0E3C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7B39C & ~(1613696596 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  return a2 == &dword_60C7B398 || sub_60027FB0(a2);
}
