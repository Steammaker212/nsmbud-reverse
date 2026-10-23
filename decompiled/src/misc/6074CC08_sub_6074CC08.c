/* sub_6074CC08
 * address: 0x6074CC08   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6074CC08()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBE950 & ~(1618267164 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBE950) )
  {
    dword_60CBE94C = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60CBE950);
  }
  return &dword_60CBE94C;
}
