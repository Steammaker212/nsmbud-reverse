/* sub_603AAA10
 * address: 0x603AAA10   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603AAA10()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C97A50 & ~(1614457380 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C97A50) )
  {
    dword_60C97A4C = (int)&off_60BF4D48;
    _cxa_guard_release(&dword_60C97A50);
  }
  return &dword_60C97A4C;
}
