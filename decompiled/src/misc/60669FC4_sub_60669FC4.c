/* sub_60669FC4
 * address: 0x60669FC4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60669FC4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB6CEC & ~(1617338328 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB6CEC) )
  {
    dword_60CB6CE8 = (int)&off_60BCFCD8;
    _cxa_guard_release(dword_60CB6CEC);
  }
  return &dword_60CB6CE8;
}
