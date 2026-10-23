/* sub_6066ADE4
 * address: 0x6066ADE4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6066ADE4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6D20 & ~(1617341944 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6D20) )
  {
    dword_60CB6D1C = (int)&off_60C12DF0;
    _cxa_guard_release(&dword_60CB6D20);
  }
  return &dword_60CB6D1C;
}
