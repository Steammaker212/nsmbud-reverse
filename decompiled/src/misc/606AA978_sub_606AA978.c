/* sub_606AA978
 * address: 0x606AA978   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606AA978()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9E5C & ~(1617602956 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9E5C) )
  {
    dword_60CB9E58 = (int)&off_60C158E4;
    _cxa_guard_release(&dword_60CB9E5C);
  }
  return &dword_60CB9E58;
}
