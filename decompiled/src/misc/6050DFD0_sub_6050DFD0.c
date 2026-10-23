/* sub_6050DFD0
 * address: 0x6050DFD0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6050DFD0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CA7A7C & ~(1615912932 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7A7C) )
  {
    dword_60CA7A78 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CA7A7C);
  }
  return &dword_60CA7A78;
}
