/* sub_607599F0
 * address: 0x607599F0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607599F0(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CBEF2C & ~(1618319880 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBEF2C) )
  {
    dword_60CBEF28 = (int)&off_60C23E4C;
    _cxa_guard_release(&dword_60CBEF2C);
  }
  v4 = 1;
  if ( a2 != &dword_60CBEF28 )
  {
    if ( ((unsigned int)&dword_60CBEC90 & ~(1618319976 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBEC90) )
    {
      dword_60CBEC8C = (int)&off_60C23E58;
      _cxa_guard_release(&dword_60CBEC90);
    }
    if ( a2 != &dword_60CBEC8C )
    {
      if ( ((unsigned int)dword_60CBEC98 & ~(1618320068 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBEC98) )
      {
        dword_60CBEC94 = (int)&off_60BC00A4;
        _cxa_guard_release(dword_60CBEC98);
      }
      return a2 == &dword_60CBEC94;
    }
  }
  return v4;
}
