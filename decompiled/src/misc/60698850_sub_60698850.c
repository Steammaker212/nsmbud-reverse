/* sub_60698850
 * address: 0x60698850   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60698850(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB9434 & ~(1617528936 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9434) )
  {
    dword_60CB9430 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB9434);
  }
  return a2 == &dword_60CB9430 || sub_60026DC8(a2);
}
