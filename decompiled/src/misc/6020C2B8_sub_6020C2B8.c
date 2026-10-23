/* sub_6020C2B8
 * address: 0x6020C2B8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6020C2B8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8CC00 & ~(1612759760 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8CC00) )
  {
    dword_60C8CBFC = (int)&off_60BD60CC;
    _cxa_guard_release(dword_60C8CC00);
  }
  if ( a2 == &dword_60C8CBFC )
    return 1;
  if ( ((unsigned int)&dword_60C8A25C & ~(1612759852 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8A25C) )
    {
      dword_60C8A258 = (int)&off_60BD4EC8;
      _cxa_guard_release(&dword_60C8A25C);
    }
  }
  return a2 == &dword_60C8A258 || sub_601767E8(a2);
}
