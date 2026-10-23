/* sub_6066B080
 * address: 0x6066B080   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6066B080()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB6D28 & ~(1617342612 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB6D28) )
  {
    dword_60CB6D24 = (int)&off_60BC317C;
    _cxa_guard_release(dword_60CB6D28);
  }
  return &dword_60CB6D24;
}
