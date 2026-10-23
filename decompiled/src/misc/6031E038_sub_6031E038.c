/* sub_6031E038
 * address: 0x6031E038   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6031E038()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C93780 & ~(1613881420 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C93780) )
  {
    dword_60C9377C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C93780);
  }
  return &dword_60C9377C;
}
