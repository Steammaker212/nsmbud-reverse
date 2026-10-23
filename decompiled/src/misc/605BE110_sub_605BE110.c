/* sub_605BE110
 * address: 0x605BE110   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605BE110(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB0890 & ~(1616634152 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0890) )
  {
    dword_60CB088C = (int)&off_60C09BC4;
    _cxa_guard_release(&dword_60CB0890);
  }
  if ( a2 == &dword_60CB088C )
    return 1;
  if ( ((unsigned int)dword_60CB0898 & ~(1616634244 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB0898) )
    {
      dword_60CB0894 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CB0898);
    }
  }
  return a2 == &dword_60CB0894 || sub_60026DC8(a2);
}
