/* sub_6079270C
 * address: 0x6079270C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6079270C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBEC90 & ~(1618552612 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBEC90) )
  {
    dword_60CBEC8C = (int)&off_60C23E58;
    _cxa_guard_release(&dword_60CBEC90);
  }
  if ( a2 == &dword_60CBEC8C )
    return 1;
  if ( ((unsigned int)dword_60CBEC98 & ~(1618552704 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CBEC98) )
    {
      dword_60CBEC94 = (int)&off_60BC00A4;
      _cxa_guard_release(dword_60CBEC98);
    }
  }
  return a2 == &dword_60CBEC94;
}
