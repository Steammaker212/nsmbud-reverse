/* sub_6064CF34
 * address: 0x6064CF34   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6064CF34(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB60EC & ~(1617219404 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB60EC) )
  {
    dword_60CB60E8 = (int)&off_60C13CF8;
    _cxa_guard_release(&dword_60CB60EC);
  }
  if ( a2 == &dword_60CB60E8 )
    return 1;
  if ( ((unsigned int)dword_60CB6044 & ~(1617219496 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB6044) )
    {
      dword_60CB6040 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60CB6044);
    }
  }
  return a2 == &dword_60CB6040 || sub_60027FB0(a2);
}
