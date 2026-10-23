/* sub_601EFAA4
 * address: 0x601EFAA4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601EFAA4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8B534 & ~(1612643000 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8B534) )
  {
    dword_60C8B530 = (int)&off_60BD4E08;
    _cxa_guard_release(dword_60C8B534);
  }
  return &dword_60C8B530;
}
