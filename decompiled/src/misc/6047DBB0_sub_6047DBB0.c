/* sub_6047DBB0
 * address: 0x6047DBB0   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6047DBB0()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60C9EAC0 & ~(1615322052 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EAC0) )
  {
    if ( ((unsigned int)dword_60C9EAC8 & ~(1615322092 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C9EAC8) )
    {
      dword_60C9EAC4 = 0;
      _cxa_guard_release(dword_60C9EAC8);
    }
    dword_60C9EABC = (int)&dword_60C9EAC4;
    _cxa_guard_release(&dword_60C9EAC0);
  }
  return &dword_60C9EABC;
}
