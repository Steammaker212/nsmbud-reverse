/* sub_603B2FAC
 * address: 0x603B2FAC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603B2FAC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C97DEC & ~(1614491584 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C97DEC) )
  {
    dword_60C97DE8 = (int)&off_60BF55F8;
    _cxa_guard_release(&dword_60C97DEC);
  }
  return &dword_60C97DE8;
}
