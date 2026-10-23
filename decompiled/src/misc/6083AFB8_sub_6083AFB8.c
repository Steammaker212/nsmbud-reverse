/* sub_6083AFB8
 * address: 0x6083AFB8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__guard *sub_6083AFB8()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CC7A20 & ~(1619242956 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CC7A20) )
  {
    memset(&dword_60CC7A20[1], 0, 36);
    sub_60000288();
    _cxa_guard_release(dword_60CC7A20);
  }
  if ( !sub_6083D8E4(&dword_60CC7A20[1]) )
    sub_6083D838(&dword_60CC7A20[1]);
  return &dword_60CC7A20[1];
}
