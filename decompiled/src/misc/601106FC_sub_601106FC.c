/* sub_601106FC
 * address: 0x601106FC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601106FC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C866F0 & ~(1611728656 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C866F0) )
  {
    dword_60C866EC = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60C866F0);
  }
  return &dword_60C866EC;
}
