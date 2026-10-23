/* sub_60145998
 * address: 0x60145998   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60145998()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88030 & ~(1611946412 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
  {
    dword_60C8802C = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C88030);
  }
  return &dword_60C8802C;
}
