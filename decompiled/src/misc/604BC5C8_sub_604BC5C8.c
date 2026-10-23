/* sub_604BC5C8
 * address: 0x604BC5C8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604BC5C8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CA2770 & ~(1615578592 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2770) )
  {
    dword_60CA276C = (int)&off_60BFD54C;
    _cxa_guard_release(&dword_60CA2770);
  }
  if ( a2 == &dword_60CA276C )
    return 1;
  if ( ((unsigned int)&dword_60C9D9A4 & ~(1615578684 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9D9A4) )
    {
      dword_60C9D9A0 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9D9A4);
    }
  }
  return a2 == &dword_60C9D9A0;
}
