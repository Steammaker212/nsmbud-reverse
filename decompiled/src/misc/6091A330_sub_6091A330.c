/* sub_6091A330
 * address: 0x6091A330   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091A330(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12
  int v5; // r1

  if ( ((unsigned int)&dword_60CCFC7C & ~(1620157260 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCFC7C) )
  {
    dword_60CCFC78 = (int)&off_60C5D4D8;
    _cxa_guard_release(&dword_60CCFC7C);
  }
  if ( a2 )
  {
    v5 = (**a2)(a2, &dword_60CCFC78);
    if ( v5 )
      v5 = (int)a2;
  }
  else
  {
    v5 = 0;
  }
  return sub_6091A0C8(a1, v5, 0);
}
