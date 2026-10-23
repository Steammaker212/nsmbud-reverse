/* sub_602952A4
 * address: 0x602952A4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602952A4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8FB88 & ~(1613320892 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FB88) )
  {
    dword_60C8FB84 = (int)&off_60BDFFDC;
    _cxa_guard_release(&dword_60C8FB88);
  }
  if ( a2 != &dword_60C8FB84 )
    JUMPOUT(0x602941DC);
  return 1;
}
