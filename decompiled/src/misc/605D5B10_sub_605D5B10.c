/* sub_605D5B10
 * address: 0x605D5B10   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605D5B10()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C84E84 & ~(1616730916 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C84E84) )
  {
    dword_60C84E80 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60C84E84);
  }
  return &dword_60C84E80;
}
