/* sub_60193F7C
 * address: 0x60193F7C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60193F7C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C89A4C & ~(1612267412 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C89A4C) )
  {
    dword_60C89A48 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C89A4C);
  }
  return a2 == &dword_60C89A48 || sub_60174850(a2);
}
