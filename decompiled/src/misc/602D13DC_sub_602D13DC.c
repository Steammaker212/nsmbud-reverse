/* sub_602D13DC
 * address: 0x602D13DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602D13DC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C91A60 & ~(1613566960 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C91A60) )
  {
    dword_60C91A5C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C91A60);
  }
  return &dword_60C91A5C;
}
