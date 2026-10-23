/* sub_6026D41C
 * address: 0x6026D41C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6026D41C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8E7FC & ~(1613157428 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E7FC) )
  {
    dword_60C8E7F8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C8E7FC);
  }
  return a2 == &dword_60C8E7F8 || sub_60026DC8(a2);
}
