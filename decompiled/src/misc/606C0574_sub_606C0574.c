/* sub_606C0574
 * address: 0x606C0574   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606C0574(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBA8E8 & ~(1617692044 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA8E8) )
  {
    dword_60CBA8E4 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBA8E8);
  }
  return a2 == &dword_60CBA8E4 || sub_60027FB0(a2);
}
