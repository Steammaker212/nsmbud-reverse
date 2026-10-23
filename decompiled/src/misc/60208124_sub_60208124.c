/* sub_60208124
 * address: 0x60208124   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60208124(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8966C & ~(1612742972 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8966C) )
  {
    dword_60C89668 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8966C);
  }
  return a2 == &dword_60C89668 || sub_60174850(a2);
}
