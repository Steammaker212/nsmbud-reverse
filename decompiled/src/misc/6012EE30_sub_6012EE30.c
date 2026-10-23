/* sub_6012EE30
 * address: 0x6012EE30   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6012EE30(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C87138 & ~(1611853384 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
  {
    dword_60C87134 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C87138);
  }
  return a2 == &dword_60C87134 || sub_60027FB0(a2);
}
