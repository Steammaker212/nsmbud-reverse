/* sub_60390E4C
 * address: 0x60390E4C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60390E4C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8816C & ~(1614351968 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8816C) )
  {
    dword_60C88168 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8816C);
  }
  return &dword_60C88168;
}
