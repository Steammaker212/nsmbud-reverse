/* sub_605FBE08
 * address: 0x605FBE08   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605FBE08()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB25F0 & ~(1616887324 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB25F0) )
  {
    dword_60CB25EC = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB25F0);
  }
  return &dword_60CB25EC;
}
