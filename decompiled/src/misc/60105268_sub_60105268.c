/* sub_60105268
 * address: 0x60105268   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60105268(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C86194 & ~(1611682432 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86194) )
  {
    dword_60C86190 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60C86194);
  }
  return a2 == &dword_60C86190 || sub_60027FB0(a2);
}
