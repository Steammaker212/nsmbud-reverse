/* sub_6073EF90
 * address: 0x6073EF90   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6073EF90()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBE26C & ~(1618210724 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
  {
    dword_60CBE268 = (int)&off_60BDBC48;
    _cxa_guard_release(&dword_60CBE26C);
  }
  return &dword_60CBE268;
}
