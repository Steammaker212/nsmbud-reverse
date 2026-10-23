/* sub_602A0B04
 * address: 0x602A0B04   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602A0B04()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C902FC & ~(1613368088 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C902FC) )
  {
    dword_60C902F8 = (int)&off_60BE24D4;
    _cxa_guard_release(&dword_60C902FC);
  }
  return &dword_60C902F8;
}
