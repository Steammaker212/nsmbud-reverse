/* sub_60654E58
 * address: 0x60654E58   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60654E58()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6380 & ~(1617251948 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6380) )
  {
    dword_60CB637C = (int)&off_60C14188;
    _cxa_guard_release(&dword_60CB6380);
  }
  return &dword_60CB637C;
}
