/* sub_606D0C68
 * address: 0x606D0C68   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606D0C68()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB46C & ~(1617759356 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB46C) )
  {
    dword_60CBB468 = (int)&off_60BF3314;
    _cxa_guard_release(&dword_60CBB46C);
  }
  return &dword_60CBB468;
}
