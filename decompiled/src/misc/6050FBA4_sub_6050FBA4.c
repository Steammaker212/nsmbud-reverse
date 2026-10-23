/* sub_6050FBA4
 * address: 0x6050FBA4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6050FBA4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CA8130 & ~(1615920056 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CA8130) )
  {
    dword_60CA812C = (int)&off_60BFF278;
    _cxa_guard_release(dword_60CA8130);
  }
  return &dword_60CA812C;
}
