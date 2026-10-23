/* sub_6074E22C
 * address: 0x6074E22C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6074E22C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBEA10 & ~(1618272832 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBEA10) )
  {
    dword_60CBEA0C = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60CBEA10);
  }
  return &dword_60CBEA0C;
}
