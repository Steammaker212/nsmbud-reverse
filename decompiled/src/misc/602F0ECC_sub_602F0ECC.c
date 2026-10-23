/* sub_602F0ECC
 * address: 0x602F0ECC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602F0ECC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7B39C & ~(1613696736 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  return &dword_60C7B398;
}
