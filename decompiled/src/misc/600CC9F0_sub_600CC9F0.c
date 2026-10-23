/* sub_600CC9F0
 * address: 0x600CC9F0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600CC9F0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C840A8 & ~(1611450888 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C840A8) )
  {
    dword_60C840A4 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C840A8);
  }
  return a2 == &dword_60C840A4 || sub_60027FB0(a2);
}
