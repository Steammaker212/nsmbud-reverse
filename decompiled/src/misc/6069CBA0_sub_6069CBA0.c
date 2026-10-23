/* sub_6069CBA0
 * address: 0x6069CBA0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6069CBA0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB5A60 & ~(1617546164 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5A60) )
  {
    dword_60CB5A5C = (int)&off_60C13490;
    _cxa_guard_release(&dword_60CB5A60);
  }
  return &dword_60CB5A5C;
}
