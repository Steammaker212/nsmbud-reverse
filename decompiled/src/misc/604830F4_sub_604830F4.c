/* sub_604830F4
 * address: 0x604830F4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604830F4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9EFE0 & ~(1615343884 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EFE0) )
  {
    dword_60C9EFDC = (int)&off_60BFD54C;
    _cxa_guard_release(&dword_60C9EFE0);
  }
  if ( a2 == &dword_60C9EFDC )
    return 1;
  if ( ((unsigned int)&dword_60C9D9A4 & ~(1615343976 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9D9A4) )
    {
      dword_60C9D9A0 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9D9A4);
    }
  }
  return a2 == &dword_60C9D9A0;
}
