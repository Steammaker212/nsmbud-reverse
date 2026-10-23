/* sub_60233568
 * address: 0x60233568   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60233568(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C83720 & ~(1612920192 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83720) )
  {
    dword_60C8371C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C83720);
  }
  return (**a2)(a2, &dword_60C8371C);
}
