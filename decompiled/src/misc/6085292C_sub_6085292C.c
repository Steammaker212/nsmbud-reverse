/* sub_6085292C
 * address: 0x6085292C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6085292C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC7F2C & ~(1619339584 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F2C) )
  {
    dword_60CC7F28 = ((int (*)(void))loc_60852A9C)();
    _cxa_guard_release(&dword_60CC7F2C);
  }
  return &dword_60CC7F28;
}
