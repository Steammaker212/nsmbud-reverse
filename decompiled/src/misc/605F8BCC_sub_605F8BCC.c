/* sub_605F8BCC
 * address: 0x605F8BCC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605F8BCC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB247C & ~(1616874464 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB247C) )
  {
    dword_60CB2478 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CB247C);
  }
  return &dword_60CB2478;
}
