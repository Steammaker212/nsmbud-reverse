/* LargeGoomba_vf1
 * address: 0x6033F87C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *LargeGoomba_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C94400 & ~(1614018704 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C94400) )
  {
    dword_60C943FC = (int)&off_60BED0A0;
    _cxa_guard_release(&dword_60C94400);
  }
  return &dword_60C943FC;
}
