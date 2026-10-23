/* sub_600885C4
 * address: 0x600885C4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600885C4(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v6; // r6

  v4 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C81760 & ~(1611171296 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
  {
    dword_60C8175C = (int)&off_60BC6E94;
    _cxa_guard_release(&dword_60C81760);
  }
  v6 = 0;
  if ( v4 && (**v4)(v4, &dword_60C8175C) == 1 )
  {
    sub_60088678(v4, a3);
    return 1;
  }
  return v6;
}
