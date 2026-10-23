/* sub_603AA270
 * address: 0x603AA270   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603AA270()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C97984 & ~(1614455428 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C97984) )
  {
    dword_60C97980 = (int)&off_60BF4A9C;
    _cxa_guard_release(dword_60C97984);
  }
  return &dword_60C97980;
}
