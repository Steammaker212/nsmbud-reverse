/* sub_605ECB34
 * address: 0x605ECB34   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605ECB34()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB1D4C & ~(1616825160 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1D4C) )
  {
    dword_60CB1D48 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB1D4C);
  }
  return &dword_60CB1D48;
}
