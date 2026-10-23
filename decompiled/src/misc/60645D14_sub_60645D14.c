/* sub_60645D14
 * address: 0x60645D14   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60645D14()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB5BD0 & ~(1617190184 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB5BD0) )
  {
    dword_60CB5BCC = (int)&off_60C12DF0;
    _cxa_guard_release(dword_60CB5BD0);
  }
  return &dword_60CB5BCC;
}
