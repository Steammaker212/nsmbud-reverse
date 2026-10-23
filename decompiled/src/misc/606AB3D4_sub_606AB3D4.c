/* sub_606AB3D4
 * address: 0x606AB3D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606AB3D4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB73E8 & ~(1617605608 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB73E8) )
  {
    dword_60CB73E4 = (int)&off_60C158F0;
    _cxa_guard_release(&dword_60CB73E8);
  }
  return &dword_60CB73E4;
}
