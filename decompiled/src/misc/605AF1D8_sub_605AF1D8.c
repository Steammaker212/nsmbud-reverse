/* sub_605AF1D8
 * address: 0x605AF1D8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605AF1D8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB02D4 & ~(1616572908 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB02D4) )
  {
    dword_60CB02D0 = (int)&off_60C08D58;
    _cxa_guard_release(&dword_60CB02D4);
  }
  return &dword_60CB02D0;
}
