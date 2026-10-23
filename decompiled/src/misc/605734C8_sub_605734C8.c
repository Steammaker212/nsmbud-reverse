/* sub_605734C8
 * address: 0x605734C8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605734C8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAEA7C & ~(1616327904 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEA7C) )
  {
    dword_60CAEA78 = (int)&off_60C026F8;
    _cxa_guard_release(&dword_60CAEA7C);
  }
  return a2 == &dword_60CAEA78 || sub_6056A970(a2);
}
