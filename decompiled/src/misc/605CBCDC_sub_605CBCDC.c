/* sub_605CBCDC
 * address: 0x605CBCDC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605CBCDC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8F384 & ~(1616690416 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F384) )
  {
    dword_60C8F380 = (int)&off_60BDE360;
    _cxa_guard_release(&dword_60C8F384);
  }
  return &dword_60C8F380;
}
