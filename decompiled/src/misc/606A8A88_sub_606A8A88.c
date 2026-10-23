/* sub_606A8A88
 * address: 0x606A8A88   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A8A88()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB9D44 & ~(1617595036 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB9D44) )
  {
    dword_60CB9D40 = (int)&off_60C158E4;
    _cxa_guard_release(dword_60CB9D44);
  }
  return &dword_60CB9D40;
}
