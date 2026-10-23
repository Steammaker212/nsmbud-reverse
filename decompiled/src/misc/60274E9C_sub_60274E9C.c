/* sub_60274E9C
 * address: 0x60274E9C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60274E9C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8EBF0 & ~(1613188784 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8EBF0) )
  {
    dword_60C8EBEC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8EBF0);
  }
  return &dword_60C8EBEC;
}
