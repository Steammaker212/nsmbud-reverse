/* sub_601BD1B0
 * address: 0x601BD1B0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601BD1B0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8AB28 & ~(1612435908 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
  {
    dword_60C8AB24 = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C8AB28);
  }
  return &dword_60C8AB24;
}
