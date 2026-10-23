/* sub_603E4030
 * address: 0x603E4030   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E4030(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7B374 & ~(1614692424 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( a2 )
    return (**a2)(a2, &dword_60C7B370);
  else
    return 0;
}
