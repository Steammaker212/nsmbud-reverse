/* sub_60830874
 * address: 0x60830874   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60830874(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CC716C & ~(1619200140 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC716C) )
  {
    dword_60CC7168 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CC716C);
  }
  return a2 == &dword_60CC7168 || sub_60027FB0(a2);
}
