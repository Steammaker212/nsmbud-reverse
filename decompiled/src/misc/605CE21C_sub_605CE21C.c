/* sub_605CE21C
 * address: 0x605CE21C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605CE21C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB1078 & ~(1616699952 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1078) )
  {
    dword_60CB1074 = (int)&off_60C0AB94;
    _cxa_guard_release(&dword_60CB1078);
  }
  return &dword_60CB1074;
}
