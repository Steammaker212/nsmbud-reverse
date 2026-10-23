/* sub_601A6FAC
 * address: 0x601A6FAC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601A6FAC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8A254 & ~(1612345284 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A254) )
  {
    dword_60C8A250 = (int)&off_60BD60CC;
    _cxa_guard_release(&dword_60C8A254);
  }
  if ( a2 == &dword_60C8A250 )
    return 1;
  if ( ((unsigned int)&dword_60C8A25C & ~(1612345376 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8A25C) )
    {
      dword_60C8A258 = (int)&off_60BD4EC8;
      _cxa_guard_release(&dword_60C8A25C);
    }
  }
  return a2 == &dword_60C8A258 || sub_601767E8(a2);
}
