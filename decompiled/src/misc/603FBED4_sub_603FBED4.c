/* sub_603FBED4
 * address: 0x603FBED4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603FBED4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C99DDC & ~(1614790376 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C99DDC) )
  {
    dword_60C99DD8 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60C99DDC);
  }
  return &dword_60C99DD8;
}
