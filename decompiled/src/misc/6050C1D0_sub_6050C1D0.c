/* sub_6050C1D0
 * address: 0x6050C1D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6050C1D0()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CA7FB0 & ~(1615905252 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CA7FB0) )
  {
    dword_60CA7FAC = (int)&off_60BFF278;
    _cxa_guard_release(dword_60CA7FB0);
  }
  return &dword_60CA7FAC;
}
