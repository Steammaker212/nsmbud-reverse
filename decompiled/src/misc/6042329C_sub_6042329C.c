/* sub_6042329C
 * address: 0x6042329C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6042329C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C80418 & ~(1614951092 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80418) )
  {
    dword_60C80414 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C80418);
  }
  return a2 == &dword_60C80414;
}
