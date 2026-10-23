/* sub_6037ED08
 * address: 0x6037ED08   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037ED08(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C969A0 & ~(1614277920 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C969A0) )
  {
    dword_60C9699C = (int)&off_60BF3314;
    _cxa_guard_release(&dword_60C969A0);
  }
  if ( v3 && (**v3)(v3, &dword_60C9699C) == 1 )
    sub_602A3EFC((int)(v3 + 1583), 24, 0.015625);
  return 1;
}
