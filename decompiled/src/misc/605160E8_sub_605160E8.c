/* sub_605160E8
 * address: 0x605160E8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605160E8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CA867C & ~(1615945980 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CA867C) )
  {
    dword_60CA8678 = (int)&off_60BFF960;
    _cxa_guard_release(&dword_60CA867C);
  }
  return &dword_60CA8678;
}
