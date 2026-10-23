/* sub_60692EDC
 * address: 0x60692EDC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60692EDC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB90EC & ~(1617506032 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB90EC) )
  {
    dword_60CB90E8 = (int)&off_60C0AB94;
    _cxa_guard_release(&dword_60CB90EC);
  }
  return &dword_60CB90E8;
}
