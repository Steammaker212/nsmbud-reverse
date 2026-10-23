/* sub_60365DAC
 * address: 0x60365DAC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60365DAC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C83100 & ~(1614175684 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83100) )
  {
    dword_60C830FC = (int)&off_60BC9040;
    _cxa_guard_release(&dword_60C83100);
  }
  if ( a2 != &dword_60C830FC )
    JUMPOUT(0x6035DB18);
  return 1;
}
