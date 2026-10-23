/* sub_6037A50C
 * address: 0x6037A50C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037A50C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9664C & ~(1614259492 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9664C) )
  {
    dword_60C96648 = (int)&off_60BE91C8;
    _cxa_guard_release(&dword_60C9664C);
  }
  if ( a2 == &dword_60C96648 )
    return 1;
  else
    return sub_6037A800(a2);
}
