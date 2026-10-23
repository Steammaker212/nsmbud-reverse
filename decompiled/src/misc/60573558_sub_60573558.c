/* sub_60573558
 * address: 0x60573558   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60573558()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAEA7C & ~(1616328044 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEA7C) )
  {
    dword_60CAEA78 = (int)&off_60C026F8;
    _cxa_guard_release(&dword_60CAEA7C);
  }
  return &dword_60CAEA78;
}
