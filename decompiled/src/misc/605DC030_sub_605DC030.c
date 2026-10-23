/* sub_605DC030
 * address: 0x605DC030   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605DC030(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12
  unsigned int result; // r0
  int v6; // r1

  result = FIELD_U8(a1, 6336);
  if ( result <= 3 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1616756828 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( a2 )
    {
      v6 = (**a2)(a2, &dword_60C7B378);
      if ( v6 )
        v6 = (int)a2;
    }
    else
    {
      v6 = 0;
    }
    return sub_605DCC78(a1, v6, 0, 0);
  }
  return result;
}
