/* TrampolineCloud_vf1
 * address: 0x606EE5B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *TrampolineCloud_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC120 & ~(1617880520 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC120) )
  {
    dword_60CBC11C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBC120);
  }
  return &dword_60CBC11C;
}
