/* sub_606798A8
 * address: 0x606798A8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606798A8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8E648 & ~(1617402048 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
  {
    dword_60C8E644 = (int)&off_60BDBC48;
    _cxa_guard_release(&dword_60C8E648);
  }
  return a2 == &dword_60C8E644 || sub_6059B0CC(a2);
}
