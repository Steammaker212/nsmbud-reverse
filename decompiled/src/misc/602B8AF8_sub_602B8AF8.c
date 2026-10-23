/* sub_602B8AF8
 * address: 0x602B8AF8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602B8AF8()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C90FA4 & ~(1613466380 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C90FA4) )
  {
    dword_60C90FA0 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C90FA4);
  }
  return &dword_60C90FA0;
}
