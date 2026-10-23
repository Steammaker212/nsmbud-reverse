/* sub_60987474
 * address: 0x60987474   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60987474(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CD0C34 & ~(1620604044 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C34) )
  {
    dword_60CD0C30 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CD0C34);
  }
  return a2 == &dword_60CD0C30;
}
