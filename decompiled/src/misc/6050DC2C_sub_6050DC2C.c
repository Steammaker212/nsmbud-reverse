/* sub_6050DC2C
 * address: 0x6050DC2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6050DC2C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CA806C & ~(1615912000 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CA806C) )
  {
    dword_60CA8068 = (int)&off_60BFF278;
    _cxa_guard_release(&dword_60CA806C);
  }
  return &dword_60CA8068;
}
