/* sub_60656E0C
 * address: 0x60656E0C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60656E0C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CB64A0 & ~(1617260068 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB64A0) )
  {
    dword_60CB649C = (int)&off_60C1455C;
    _cxa_guard_release(dword_60CB64A0);
  }
  if ( a2 == &dword_60CB649C )
    return 1;
  if ( ((unsigned int)&dword_60CB6408 & ~(1617260160 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB6408) )
    {
      dword_60CB6404 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB6408);
    }
  }
  return a2 == &dword_60CB6404 || sub_60027FB0(a2);
}
