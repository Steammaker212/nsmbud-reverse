/* sub_600C04CC
 * address: 0x600C04CC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600C04CC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C83928 & ~(1611400420 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C83928) )
  {
    dword_60C83924 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C83928);
  }
  return a2 == &dword_60C83924 || sub_60027FB0(a2);
}
