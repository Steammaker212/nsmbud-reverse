/* sub_6075DAA8
 * address: 0x6075DAA8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6075DAA8(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CBF2AC & ~(1618336448 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBF2AC) )
  {
    dword_60CBF2A8 = (int)&off_60C23E4C;
    _cxa_guard_release(&dword_60CBF2AC);
  }
  v4 = 1;
  if ( a2 != &dword_60CBF2A8 )
  {
    if ( ((unsigned int)&dword_60CBEC90 & ~(1618336544 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBEC90) )
    {
      dword_60CBEC8C = (int)&off_60C23E58;
      _cxa_guard_release(&dword_60CBEC90);
    }
    if ( a2 != &dword_60CBEC8C )
    {
      if ( ((unsigned int)dword_60CBEC98 & ~(1618336636 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBEC98) )
      {
        dword_60CBEC94 = (int)&off_60BC00A4;
        _cxa_guard_release(dword_60CBEC98);
      }
      return a2 == &dword_60CBEC94;
    }
  }
  return v4;
}
