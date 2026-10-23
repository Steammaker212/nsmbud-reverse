/* FireballBase_checkRTTI
 * address: 0x60136E60   size: 120   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall FireballBase_checkRTTI(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C823C4 & ~(1611886200 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
  {
    FireballBase_RTTI = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823C4);
  }
  return a2 == &FireballBase_RTTI || sub_60027FB0(a2);
}
