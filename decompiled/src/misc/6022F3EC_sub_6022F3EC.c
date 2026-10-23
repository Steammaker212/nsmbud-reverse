/* sub_6022F3EC
 * address: 0x6022F3EC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6022F3EC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8D818 & ~(1612903424 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8D818) )
  {
    dword_60C8D814 = (int)&off_60BD9320;
    _cxa_guard_release(dword_60C8D818);
  }
  return &dword_60C8D814;
}
